#ifndef ANSI_COLOR_H
#define ANSI_COLOR_H

#define ANSI_START 27
#define ANSI_END 'm'
#define ANSI_RESET "\033[0m"

#define PINKFISH_DELIMITER "%^"
#define PINKFISH_FIRST '%'
#define PINKFISH_SECOND '^'

/*
 * Check if we've covered a Pinkfish sequence need to act. Sequences can be
 * escaped by doubling the characters, like %%^^
 * chr - pointer to start of string
 * off - current offset into the string
 */
#define END_OF_PINKFISH_SEQUENCE(chr, off) \
    (((off) == 1 && *((chr) + (off)) == PINKFISH_SECOND && *chr == PINKFISH_FIRST) || \
    ((off) > 1 && *((chr) + (off)) == PINKFISH_SECOND && *((chr) + (off) - 1) == PINKFISH_FIRST && \
        (*((chr) + (off) - 2) != PINKFISH_FIRST || *((chr) + (off) + 1) != PINKFISH_SECOND)))

int strlen_printable(char *str);
char *substitute_pinkfish(char *chr, _Bool color_enabled, struct interactive *inter);

#endif // ANSI_COLOR_H