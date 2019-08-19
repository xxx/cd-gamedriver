/*
 * pcre.c
 *
 * Perl-compatible regular expression functions
 */

#include <string.h>
#include <stdio.h>
#include "config.h"
#include "pcre.h"
#include "lint.h"
#include "interpret.h"
#include "mstring.h"

/* Return a structure that needs to be freed with pcre2_code_free */
/* error_buffer should be at least BUFSIZ bytes in length */
pcre2_code *
pcre_compile(const char *pat, char *error_buffer)
{
    pcre2_code *re;
    PCRE2_SIZE error_offset;
    PCRE2_SPTR pattern = (PCRE2_SPTR)pat;
    int error_number;

    re = pcre2_compile(
        pattern,               /* the pattern */
        PCRE2_ZERO_TERMINATED, /* indicates pattern is zero-terminated */
#ifdef USE_UTF8
        PCRE2_UTF,             /* default options */
#else
        0,
#endif
        &error_number,         /* for error number */
        &error_offset,         /* for error offset */
        NULL);                 /* use default compile context */

    /* Compilation failed: print the error message and exit. */

    if (re == NULL)
    {
        PCRE2_UCHAR err[256];
        pcre2_get_error_message(
            error_number, err, sizeof(err)
        );
        snprintf(error_buffer, BUFSIZ,
            "PCRE2 compilation failed at offset %d: %s",
            (int)error_offset,
            (char *)err
        );

        return NULL;
    }

    return re;
}

/* Return a match_data that needs to be freed with pcre2_match_data_free */
pcre2_match_data *
pcre_match(const char *sub, pcre2_code *re, int *rc)
{
    PCRE2_SPTR subject = (PCRE2_SPTR)sub;
    size_t subject_length = strlen((char *)subject);

    pcre2_match_data *match_data =
        pcre2_match_data_create_from_pattern(re, NULL);

    *rc = pcre2_match(
          re,                   /* the compiled pattern */
          subject,              /* the subject string */
          subject_length,       /* the length of the subject */
          0,                    /* start at offset 0 in the subject */
          0,                    /* default options */
          match_data,           /* block for storing the result */
          NULL);

    return match_data;
}

/* Return 1 if there's a match, else 0 */
int
pcre_matches(const char *sub, pcre2_code *re)
{
    int rc = 0;
    pcre2_match_data *match_data = pcre_match(sub, re, &rc);
    pcre2_match_data_free(match_data);   /* Release memory used for the match */

    return rc > 0;
}

/* Return matching strings. This is the semantics of the regexp() efun. */
struct vector *
pcre_filter(struct vector *subjects, pcre2_code *re)
{
    extern int eval_cost;
    unsigned int i, num_match;

    if (subjects->size == 0)
        return allocate_array(0);

    char result[(size_t)subjects->size];

    for (num_match = i = 0; i < subjects->size; i++) {
        result[i] = 0;

        if (subjects->item[i].type != T_STRING)
            continue;
        eval_cost++;
        if (!pcre_matches(subjects->item[i].u.string, re)) {
            continue;
        }
        result[i] = 1;
        num_match++;
    }

    struct vector *ret = allocate_array(num_match);

    for (num_match=i=0; i < subjects->size; i++) {
        if (result[i] == 0)
            continue;
        assign_svalue_no_free(&ret->item[num_match], &subjects->item[i]);
        num_match++;
    }

    return ret;
}

/* Return captured substrings */
struct vector *
pcre_capture(const char *sub, pcre2_code *re)
{
    int rc = 0, i;

    pcre2_match_data *match_data = pcre_match(sub, re, &rc);

    if (rc < 1) {
        pcre2_match_data_free(match_data);
        return NULL;
    }

    PCRE2_SIZE *ovector = pcre2_get_ovector_pointer(match_data);

    /* We must guard against patterns such as /(?=.\K)/ that use \K in an assertion
       to set the start of a match later than its end. In this demonstration program,
       we just detect this case and give up. */

    if (ovector[0] > ovector[1]) {
        pcre2_match_data_free(match_data);
        return NULL;
    }

    PCRE2_SPTR subject = (PCRE2_SPTR)sub;
    struct vector *ret = allocate_array(rc);

    char buff[strlen(sub) + 1];

    for (i = 0; i < rc; i++) {
        PCRE2_SPTR substring_start = subject + ovector[2*i];
        size_t substring_length = ovector[2*i+1] - ovector[2*i];

        strncpy(buff, (char *)substring_start, substring_length);
        buff[substring_length] = '\0';

        ret->item[i].type = T_STRING;
        ret->item[i].string_type = STRING_MSTRING;
        ret->item[i].u.string = make_mstring(buff);
    }

    pcre2_match_data_free(match_data);

    return ret;
}


