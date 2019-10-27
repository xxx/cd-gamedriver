/*
 * test-033.c
 *
 * Some tests around driver hashing of strings
 */

#define MD5 0
#define SHA1 1
#define SHA256 2
#define SHA384 3
#define SHA512 4

#define MATCHES(str, alg, exp) (hash_string((str), (alg)) == (exp) ? "match" : "no match")
void
test_hash_string()
{
    string str = "The quick brown fox jumped over the lazy dog.";
    string e_md5 = "5c6ffbdd40d9556b73a21e63c3e0e904";
    string e_sha1 = "c0854fb9fb03c41cce3802cb0d220529e6eef94e";
    string e_sha256 = "68b1282b91de2c054c36629cb8dd447f12f096d3e3c587978dc2248444633483";
    string e_sha384 = "b7273c05ad141ccb6696b3659e57137c453b6d64690fa7d5cf96368df4a7138703a8c6ead31727b487b3628746510391";
    string e_sha512 = "0a8c150176c2ba391d7f1670ef4955cd99d3c3ec8cf06198cec30d436f2ac0c9b64229b5a54bdbd5563160503ce992a74be528761da9d0c48b7c74627302eb25";

    write("md5: " + MATCHES(str, MD5, e_md5) + "\n");
    write("sha1: " + MATCHES(str, SHA1, e_sha1) + "\n");
    write("sha256: " + MATCHES(str, SHA256, e_sha256) + "\n");
    write("sha384: " + MATCHES(str, SHA384, e_sha384) + "\n");
    write("sha512: " + MATCHES(str, SHA512, e_sha512) + "\n");

    write("bad str: " + MATCHES(666, SHA1, 0) + "\n");

    string err = catch(hash_string("foobar", 666));
    write("bad algo: " + (err != 0 ? "threw expected error" : "did not throw expected error") + "\n");
}

void
create()
{
    test_hash_string();
}