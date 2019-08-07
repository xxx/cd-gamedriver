#ifndef PCRE_H
#define PCRE_H

#define PCRE2_CODE_UNIT_WIDTH 8

#include <pcre2.h>

pcre2_code *pcre_compile(const char *pat, int *error_number, char *error_buffer);
int pcre_match(const char *subject, pcre2_code *re);

#endif // PCRE_H