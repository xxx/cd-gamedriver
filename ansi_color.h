#ifndef ANSI_COLOR_H
#define ANSI_COLOR_H

#define ANSI_START 27
#define ANSI_END 'm'
#define ANSI_RESET "\033[0m"

#define PINKFISH_DELIMITER "%^"
#define PINKFISH_FIRST '%'
#define PINKFISH_SECOND '^'

int strlen_printable(char *str);
char *strip_color(char *str);
char *substitute_pinkfish(char *chr, _Bool color_enabled, struct interactive *inter);

#endif // ANSI_COLOR_H