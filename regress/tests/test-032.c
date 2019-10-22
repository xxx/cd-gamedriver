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
    write("strlen(str) " + strlen(str) + " " + strlen_printable(str) + "\n");
    write("strlen(colored) " + strlen(colored) + " " + strlen_printable(colored) + "\n");
    write("strlen with escape " + strlen("%%^^RED%%^^foo") + " " + strlen_printable("%%^^RED%%^^foo") + "\n");

    write((ORANGE("foobar") == terminal_colour("%^ORANGE%^foobar%^RESET%^")) + "\n");

    // that %%^^ is an escaped version of the sequence, and not counted
    write(terminal_colour("%%^^RED%%^^") + "\n");
//    write(terminal_colour("%^BLACK%^HELLO FRIENDS%^RESET%") + "\n");
    write(terminal_colour("%^BLUE%%^^DAWGZ%^%^WHITE%^taccos%^RESET%^") + "\n");
    write((terminal_colour("%%^^RED%%^^") == "%^RED%^") + "\n");
    write("%^ORANGE%^DIRECT WRITE COLOR%^RESET%^");
    write("%%%^^^foobar\n");

    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
    write(terminal_colour("%^%^%^%^%^%^%^%^%^%^%^%^%^%^^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%^%\n"));
}

void
test_sprintf()
{
    write(
        sprintf(
            "%-8s %-8s\n",
            RED("xxx"),
            ORANGE("yyy")
        )
    );

    write(
        sprintf(
            "%-8s %-8s\n",
            "%^RED%^xxx%^RESET%^",
            "%^ORANGE%^yyy%^RESET%^"
        )
    );

    write(
        sprintf(
            "%|8sx%|8s\n",
            RED("xxx"),
            ORANGE("yyy")
        )
    );

    write(
        sprintf(
            "%|8sx%|8s\n",
            "%^RED%^xxx%^RESET%^",
            "%^ORANGE%^yyy%^RESET%^"
        )
    );
    string str = "the quick brown fox jumped over the lazy dog";
    string colored = RED(str);
    string colored2 = "%^RED%^"+ str + "%^RESET%^";
    write(sprintf("%=10s %5s\n", str, "tacos"));
    write(sprintf("%=10s %5s\n", colored, "tacos"));
    write(sprintf("%=10s %5s\n", colored2, "tacos"));

    write(sprintf("%#60.4s\n", implode(explode(str, " "), "\n")));
    write(sprintf("%#60.4s\n", implode(explode(colored, " "), "\n")));
    write(sprintf("%#60.4s\n", implode(explode(colored2, " "), "\n")));

    write(sprintf("100%%%^GREEN%^ Awesome %^RESET%^\n"));
}

void
create()
{
    test_terminal_colour();
    test_sprintf();
}