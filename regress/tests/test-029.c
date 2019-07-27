#pragma strict_types

#define ESC 27

#define RED(txt) sprintf("%c[31m%s%c[0m", ESC, txt, ESC)
#define ORANGE(txt) sprintf("%c[38;5;208m%s%c[0m", ESC, txt, ESC)
#define BLUE(txt) sprintf("%c[12m%s%c[0m", ESC, txt, ESC)

/*
 * Some tests around the #define of ANSI_COLOR
 */

void
test_strlen()
{
    // 0: input
    // 1: expected output of strlen_printable
    // 2: expected output of strlen
    mixed *strings = ({
        ({"just a string\n", 14, 14 }),
        ({ sprintf(
            // The 'm' in 'normalizer' closes the sequence
            "%c[31mRed Tacos%c[0Forgot to close the normalizer sequence.%c[0m\n",
            ESC, ESC, ESC), 26, 62 }),
        ({ sprintf(
            "%c[31mRed Tacos%c[0m %c[38;5;208mOrange Tacos%c[0m\n",
            ESC, ESC, ESC, ESC), 23, 47 }),
        ({ 0, 0, 0 }),
        ({ "", 0, 0 })
    });

    foreach(string *triplet: strings)
    {
        write("strlen_printable() of [" + triplet[0] + "] is " +
        strlen_printable(triplet[0]) +
        ". We expect " + triplet[1] + ".\n");
        write("strlen() of [" + triplet[0] + "] is " + strlen(triplet[0]) +
        ". We expect " + triplet[2] + ".\n");
    }
}

void
test_break_string()
{
    mixed *strings = ({
        ({
            "Hello my Nice Friends. How are you today?\n",
            "Hello my\nNice\nFriends.\nHow are\nyou\ntoday?\n",
            "Hello my\nNice\nFriends.\nHow are\nyou\ntoday?\n"
        }),
        ({
            sprintf(
                "%c[31mRed Tacos%c[0m %c[38;5;208mOrange Tacos%c[0m\n",
                ESC, ESC, ESC, ESC),
            sprintf(
                "%c[31mRed Tacos%c[0m\n%c[38;5;208mOrange\nTacos%c[0m\n",
                ESC, ESC, ESC, ESC),
            sprintf(
                "%c[31mRed\nTacos%c[0m\n%c[38;5;208mOrange\nTacos%c[0m\n",
                ESC, ESC, ESC, ESC)
        }),
        ({
            0, 0, 0
        }),
        ({
            "", "", ""
        })
    });

    int i, sz;

    for(i = 0, sz = sizeof(strings); i < sz; i++)
    {
        string *triplet = strings[i];
        string str = "break_string() example " + (i + 1) +
            ": ";

        string broken = break_string(triplet[0], 10);

        if (broken == triplet[1])
        {
            str += "Equal to ANSI expected.";
        }
        else
        {
            str += "Not equal to ANSI expected.";
        }

        if (broken == triplet[2])
        {
            str += " Equal to non-ANSI expected.";
        }
        else
        {
            str += " Not equal to non-ANSI expected.";
        }

        write(str + "\n");
    }
}

void test_sprintf()
{
    string str = "the quick brown fox jumped over the lazy dog";
    string colored = sprintf("%c[31m" + str + "%c[0m", ESC, ESC);

    write(
        sprintf(
            "%8s %8s\n",
            "xxx",
            "yyy"
        )
    );
    write(
        sprintf(
            "%8s %8s\n",
            sprintf("%c[31mxxx%c[0m", ESC, ESC),
            sprintf("%c[38;5;208myyy%c[0m", ESC, ESC)
        )
    );

    write(
        sprintf(
            "%-8s %-8s\n",
            "xxx",
            "yyy"
        )
    );
    write(
        sprintf(
            "%-8s %-8s\n",
            sprintf("%c[31mxxx%c[0m", ESC, ESC),
            sprintf("%c[38;5;208myyy%c[0m", ESC, ESC)
        )
    );

    write(
        sprintf(
            "%|8sx%|8s\n",
            "xxx",
            "yyy"
        )
    );
    write(
        sprintf(
            "%|8sx%|8s\n",
            sprintf("%c[31mxxx%c[0m", ESC, ESC),
            sprintf("%c[38;5;208myyy%c[0m", ESC, ESC)
        )
    );

    write(sprintf("%=10s %5s\n", str, "tacos"));
    write(sprintf("%=10s %5s\n", colored, "tacos"));

    write(sprintf("%#60.4s\n", implode(explode(str, " "), "\n")));
    write(sprintf("%#60.4s\n", implode(explode(colored, " "), "\n")));

    string red = RED("red");
    string orange = ORANGE("orange");
    string blue = BLUE("blue");
    string *colors = ({
        red, orange, blue,
        red, orange, blue,
        red, orange, blue,
        red, orange, blue,
        red, orange, blue,
        red, orange, blue,
    });

    string s = implode(colors, " ");
    write(sprintf("%=10s %=10s %=10s\n", s, s, s));

    write(sprintf("%=10s %=10s %=10s\n", RED("taccos"), ORANGE(
        "Hello my nice friends. How are you today? I am writing " +
        "a bunch to try to make this display the bad column sizing " +
        "with colors"), BLUE(
        "Hello my nice friends. How are you today? I am writing " +
        "a bunch to try to make this display the bad column sizing " +
        "with colors")
        )
    );
    write(sprintf("%=10s %=10s %=10s\n", "taccos",
        "Hello my nice friends. How are you today? I am writing " +
        "a bunch to try to make this display the bad column sizing " +
        "with colors",
        "Hello my nice friends. How are you today? I am writing " +
        "a bunch to try to make this display the bad column sizing " +
        "with colors"
        )
    );
}

void
create()
{
    test_strlen();
    test_break_string();
    test_sprintf();
}
