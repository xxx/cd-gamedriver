#ifndef ANSI_COLOR_H
#define ANSI_COLOR_H

#define ANSI_START 27
#define ANSI_END 'm'

int strlen_printable(char *str);
char *strip_color(char *str);
char *substitute_pinkfish(const char *chr, _Bool strip_only);

#endif // ANSI_COLOR_H