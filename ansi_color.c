/*
 * ansi_color.c
 *
 * Additional support functions for ANSI colors.
 */
#include <string.h>
#include "ansi_color.h"

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

        chr++;
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
        strcpy(s, sequence_start);
    } else {
        *s = '\0';
    }

    return chr;
}
