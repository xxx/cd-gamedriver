/*
 * test-031.c
 *
 * Some tests around utf-8 handling
 */

#define ESC 27

#define RED(txt) sprintf("%c[31m%s%c[0m", ESC, txt, ESC)
#define ORANGE(txt) sprintf("%c[38;5;208m%s%c[0m", ESC, txt, ESC)
#define BLUE(txt) sprintf("%c[34m%s%c[0m", ESC, txt, ESC)

void
test_readable_string()
{
    write(readable_string("hello\n") + "\n");
    write(readable_string("hello\né😈☻") + "\n");
}

void
test_strlen()
{
    write(strlen("hello\n") + "\n");
    write(strlen_printable("hello\n") + "\n");
    write(strlen("hello\né😈☻") + "\n");
    write(strlen_printable("hello\né😈☻") + "\n");
    write(strlen(RED("hello\né😈☻")) + "\n");
    write(strlen_printable(RED("hello\né😈☻")) + "\n");
}

void
create()
{
    test_readable_string();
    test_strlen();
}