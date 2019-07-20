/*
 * ansi_color.c
 *
 * Additional support functions for ANSI colors.
 */
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