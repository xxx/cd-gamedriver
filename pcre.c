/*
 * pcre.c
 *
 * Perl-compatible regular expression functions
 */

#include <string.h>
#include <stdio.h>
#include "pcre.h"

/* Return a structure that needs to be freed with pcre2_code_free */
pcre2_code *
pcre_compile(const char *pat, int *error_number, char *error_buffer)
{
    pcre2_code *re;
    PCRE2_SIZE error_offset;
    PCRE2_SPTR pattern = (PCRE2_SPTR)pat;

    re = pcre2_compile(
        pattern,               /* the pattern */
        PCRE2_ZERO_TERMINATED, /* indicates pattern is zero-terminated */
        0,                     /* default options */
        error_number,          /* for error number */
        &error_offset,         /* for error offset */
        NULL);                 /* use default compile context */

    /* Compilation failed: print the error message and exit. */

    if (re == NULL)
    {
        PCRE2_UCHAR err[256];
        pcre2_get_error_message(
            *error_number, err, sizeof(err)
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
    int subject_length = strlen((char *)subject);

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

int
pcre_matches(const char *sub, pcre2_code *re)
{
    int rc = 0;
    pcre2_match_data *match_data = pcre_match(sub, re, &rc);
    pcre2_match_data_free(match_data);   /* Release memory used for the match */

    return rc > 0;
}

