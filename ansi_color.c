/*
 * ansi_color.c
 *
 * Additional support functions for ANSI colors.
 */
#include <string.h>
#include <stdio.h>
#include <comm.h>
#include "ansi_color.h"
#include "config.h"
#include "memory.h"
#include "pinkfish_codes.h"
#ifdef USE_UTF8
#include <glib.h>
#endif

#ifdef USE_UTF8
/*
 * valid sgr sequence characters are all ascii, so this is
 * the only thing that needs updating, since we can get
 * away with checking the first byte only.
 */
#define NEXT_CHAR(chr) g_utf8_next_char(chr)
#else
#define NEXT_CHAR(chr) ((chr) + 1)
#endif

int
strlen_printable(char *chr)
{
    int ansi_len = 0;
    int i = 0;
    _Bool in_ansi = 0;
    _Bool in_pinkfish = 0;

    while (*chr) {
        i++;

        if (in_ansi) {
            /* end of sequence */
            if ((*chr) == ANSI_END) {
                /* subtract the length of just-finished sequence */
                i -= ansi_len + 1;
                ansi_len = 0;
                in_ansi = 0;
            } else {
                ansi_len++;
            }
        } else if (in_pinkfish) {
            if ((*chr) == PINKFISH_FIRST && (*NEXT_CHAR(chr)) == PINKFISH_SECOND) {
                // We skip both chars at once here

                // only subject len + 1 because i was
                // never incremented for '^'.
                i -= ansi_len + 1;
                ansi_len = 0;
                in_pinkfish = 0;
                chr = NEXT_CHAR(chr);
            } else {
                ansi_len++;
            }
        } else if ((*chr) == ANSI_START) {
            in_ansi = 1;
            ansi_len++;
        } else if ((*chr) == PINKFISH_FIRST && (*NEXT_CHAR(chr)) == PINKFISH_SECOND) {
            // We skip both chars at once here
            in_pinkfish = 1;
            ansi_len += 2;
            i++;
            chr = NEXT_CHAR(chr);
        }

        if (!chr) {
            break;
        }

        chr = NEXT_CHAR(chr);
    }

    return i;
}

char *
strip_color(char *chr)
{
    char *sequence_start = 0;
    char *d, *s;
    d = s = chr;

    while(*d) {
        if (!sequence_start && *d == ANSI_START) {
            sequence_start = d;
        }

        while (sequence_start && *d) {
            if (*d == ANSI_END) {
                sequence_start = 0;
            }
            ++d;
        }

        // handle multiple sequences in succession
        if(!sequence_start && *d == ANSI_START) {
            continue;
        }

        if (*d) {
            *s++ = *d++;
        }
    }

    // Handle the case where we get to the end, but
    // are in the middle of a sequence. We treat
    // the unfinished sequence as normal text.
    if (sequence_start) {
        memmove(s, sequence_start, (d - s + 1));
    } else {
        *s = '\0';
    }

    return chr;
}

/*
 * Substitute pinkfish codes in a string with the actual escape sequences.
 * pinkfish_lookup is handled by a perfect minimal hash function generated
 * by gperf. New codes should be added to the relevant .gperf file, and then
 * the header regenerated.
 *
 * The caller needs to free() the result of this function.
 *
 * if strip_only is true, we only remove the pinkfish codes from the
 * input, without replacing them with anything.
 */
char *
substitute_pinkfish(const char *chr, _Bool color_enabled, struct interactive *inter)
{
    const char *const delim = PINKFISH_DELIMITER;

    /*
     * "big enough". In almost all cases the pinkfish code
     * is longer than the actual sequence, and when it's not,
     * there's no 2-1 difference.
     */
    char *result = (char *)xalloc(2*(strlen(chr) + 1));

    char *result_ptr = result;
    char *code_start;
    int in_code = 0;

    char *token;
    while((token = strstr(chr, delim))) {
        // handle escaped %'s, and turn %%^ into %^
        if (token > chr && *(token - 1) == PINKFISH_FIRST) {
                if (!in_code) {
                    memcpy(result_ptr, chr, token - chr - 1);
                    result_ptr += (token - chr - 1);
                    memcpy(result_ptr, delim, 2);
                    result_ptr += 2;
                }
                // else it will be considered part of the code, and
                // so almost certainly a mistake
        } else if (!in_code) {
            in_code = 1;
            code_start = token + 2;

            memcpy(result_ptr, chr, token - chr);
            result_ptr += (token - chr);
        } else {
            in_code = 0;

            if (color_enabled) {
                const struct pinkfish_code *code;

                int token_len = token - code_start;
                code = pinkfish_lookup(code_start, token_len);

                if (code) {
                    size_t len = strlen(code->ansi);
                    memcpy(result_ptr, code->ansi, len);
                    result_ptr += len;
                } else if (inter && (token_len == 6 || token_len == 7)) {
                    char theme_code[7]; // enough to hold FG_XXX + nul
                    int code_len = 0;

                    if (strncmp(code_start, "T_HIGH", token_len) == 0) {
                        code_len = sprintf(theme_code, "FG_%d", inter->theme_high);
                    } else if (strncmp(code_start, "T_LIGHT", token_len) == 0) {
                        code_len = sprintf(theme_code, "FG_%d", inter->theme_light);
                    } else if (strncmp(code_start, "T_NORM", token_len) == 0) {
                        code_len = sprintf(theme_code, "FG_%d", inter->theme_norm);
                    } else if (strncmp(code_start, "T_DARK", token_len) == 0) {
                        code_len = sprintf(theme_code, "FG_%d", inter->theme_dark);
                    } else if (strncmp(code_start, "T_VDARK", token_len) == 0) {
                        code_len = sprintf(theme_code, "FG_%d", inter->theme_vdark);
                    }

                    if (code_len > 0) {
                        code = pinkfish_lookup(theme_code, code_len);
                        if (code) {
                            size_t len = strlen(code->ansi);
                            memcpy(result_ptr, code->ansi, len);
                            result_ptr += len;
                        }
                    }
                }
            }

            // else remove unknown tokens in the output.
        }

        chr = token + 2;
    }

    // copy any remaining bytes + nul. unfinished tokens will have the
    // unfinished portion copied in.
    size_t len = strlen(chr);
    strncpy(result_ptr, chr, len + 1);

    return result;
}