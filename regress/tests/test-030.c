#pragma strict_types

/*
 * Some tests around the #define of HAVE_PCRE
 */

void
test_pcre_matches()
{
    function output = &sprintf("matched (should be %d): %d\n", ,);
    string str = "The quick brown fox jumped over the lazy dog";

    write(output(1, pcre_matches(str, "quick brown fox")));
    write(output(0, pcre_matches(str, "^quick brown fox")));
    write(output(1, pcre_matches(str, "(?i)the quick brown fox")));
    write(output(0, pcre_matches(str, "the quick brown fox")));
    // The driver does not support UTF-8 at time of writing
    write(output(0, pcre_matches(str, "(*UTF8)the quick brown fox")));
}

void
test_pcre_filter()
{
    string regexp = "[Tt]he (?:kinda )?quick brown fox";

    string *strs = ({
        "The quick brown fox jumped over the lazy dog.",
        "the quick brown fox jumped over the lazy dog.",
        "brown fox jumped over the lazy dog",
        "quick brown fox jumped",
        "the kinda quick brown fox jumped",
        "THE QUICK BROWN FOX JUMPED"
    });

    foreach(string str: pcre_filter(strs, regexp)) {
        write("pcre_filter matched: " + str + "\n");
    }
}

void
test_pcre_capture()
{
    string regexp = "(?i)(The ((?:kinda )?quick) brown) fox";
    string str = "the kinda quick brown fox jumped over the lazy dog.";

    string *result = pcre_capture(str, regexp);
    int i;

    for(i = 0; i < sizeof(result); i++) {
        write(sprintf("capture index %d: %s\n", i, result[i]));
    }
}

void
create()
{
    test_pcre_matches();
    test_pcre_filter();
    test_pcre_capture();
}
