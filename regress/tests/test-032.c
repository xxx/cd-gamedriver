/*
 * test-032.c
 *
 * Some tests around driver handling of colors
 */

#define ESC 27

#define RED(txt) sprintf("%c[31m%s%c[0m", ESC, txt, ESC)
#define ORANGE(txt) sprintf("%c[38;5;208m%s%c[0m", ESC, txt, ESC)
#define BLUE(txt) sprintf("%c[34m%s%c[0m", ESC, txt, ESC)

void
test_terminal_colour()
{
    string str = "\n\n%^FG_130%^%^B_ORANGE%^%^BOLD%^%^UNDERLINE%^%^FLASH%^hello%^RESET%^\n";
    string colored = terminal_colour(str);
    write(colored + "\n");
    write(strlen(str) + " " + strlen_printable(str) + "\n");
    write(strlen(colored) + " " + strlen_printable(colored) + "\n");

    write((ORANGE("foobar") == terminal_colour("%^ORANGE%^foobar%^RESET%^")) + "\n");

    // that %%^ is an escaped version of the sequence, and not counted
    write(terminal_colour("%%^RED%%^") + "\n");
    write(terminal_colour("%^BLACK%^HELLO FRIENDS%^RESET%") + "\n");
    write(terminal_colour("%^BLUE%%^DAWGZ%^%^WHITE%^taccos%^RESET%^", 0) + "\n");
    write((terminal_colour("%%^RED%%^") == "%^RED%^") + "\n");
    write("^%ORANGE^%DIRECT WRITE COLOR%^RESET%^");

    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
}

void
create()
{
    test_terminal_colour();
}