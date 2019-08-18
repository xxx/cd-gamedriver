/*
 * ansi_color.c
 *
 * Additional support functions for ANSI colors.
 */
#include <string.h>
#include "ansi_color.h"
#include "config.h"
#ifdef USE_UTF8
#include <glib.h>
#endif

int
strlen_printable(char *chr)
{
    int ansi_len = 0;
    int i = 0;

    while (*chr)
    {
        i++;

        if (ansi_len > 0)
        {
            /* end of sequence */
            if ((*chr) == ANSI_END)
            {
                /* subtract the length of just-finished sequence */
                i -= ansi_len + 1;
                ansi_len = 0;
            }
            else
            {
                ansi_len++;
            }
        }
        else if ((*chr) == ANSI_START)
        {
            ansi_len++;
        }

#ifdef USE_UTF8
        /*
         * valid sgr sequence characters are all ascii, so this is
         * the only thing that needs updating, since we can get
         * away with checking the first byte only.
         */
        chr = g_utf8_next_char(chr);
#else
        chr++;
#endif
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
