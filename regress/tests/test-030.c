#pragma strict_types

/*
 * Some tests around the #define of HAVE_PCRE
 */

void
test_pcre_match()
{
    function output = &sprintf("matched (should be %d): %d\n", ,);
    string str = "The quick brown fox jumped over the lazy dog";

    write(output(1, pcre_match(str, "quick brown fox")));
    write(output(0, pcre_match(str, "^quick brown fox")));
    write(output(1, pcre_match(str, "(?i)the quick brown fox")));
    write(output(0, pcre_match(str, "the quick brown fox")));
}

void
create()
{

    test_pcre_match();
}
