/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf pinkfish_codes.gperf  */
/* Computed positions: -k'1,4-6' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 10 "pinkfish_codes.gperf"
struct pinkfish_code { char *name; char *ansi; };
#include <string.h>

#define TOTAL_KEYWORDS 541
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 9
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 1786
/* maximum key range = 1784, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
pinkfish_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,  210,   50,
       170,  130,   90,  480,  302,  262,  761,   20,  970,  760,
       470,  250,  230,   21,  990,    1,    0,   50,   15,   25,
         5,    3, 1015,  525,  775,  755,  545,   20,    0,   50,
      1787, 1787,    0,  465,    5,   15,   10,   40,    0,   75,
      1787,  185,   15,    0, 1787,   10,  145,   10, 1787, 1787,
      1787,    0,    0,   60, 1787, 1787, 1787, 1787,    5, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787, 1787,
      1787, 1787, 1787, 1787, 1787
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]+9];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]+19];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

const struct pinkfish_code *
pinkfish_lookup (register const char *str, register size_t len)
{
  static const struct pinkfish_code pinkfish_codes[] =
    {
#line 13 "pinkfish_codes.gperf"
      {"RED", "\033[38;5;1m"},
#line 16 "pinkfish_codes.gperf"
      {"BLUE", "\033[38;5;4m"},
#line 301 "pinkfish_codes.gperf"
      {"BG_4", "\033[48;5;4m"},
#line 14 "pinkfish_codes.gperf"
      {"GREEN", "\033[38;5;2m"},
#line 300 "pinkfish_codes.gperf"
      {"BG_3", "\033[48;5;3m"},
#line 35 "pinkfish_codes.gperf"
      {"RESET", "\033[0m"},
#line 45 "pinkfish_codes.gperf"
      {"FG_4", "\033[38;5;4m"},
#line 44 "pinkfish_codes.gperf"
      {"FG_3", "\033[38;5;3m"},
#line 26 "pinkfish_codes.gperf"
      {"B_MAGENTA", "\033[48;5;5m"},
#line 298 "pinkfish_codes.gperf"
      {"BG_1", "\033[48;5;1m"},
#line 22 "pinkfish_codes.gperf"
      {"B_RED", "\033[48;5;1m"},
#line 33 "pinkfish_codes.gperf"
      {"REVERSE", "\033[7m"},
#line 42 "pinkfish_codes.gperf"
      {"FG_1", "\033[38;5;1m"},
#line 17 "pinkfish_codes.gperf"
      {"MAGENTA", "\033[38;5;5m"},
#line 346 "pinkfish_codes.gperf"
      {"BG_49", "\033[48;5;49m"},
#line 299 "pinkfish_codes.gperf"
      {"BG_2", "\033[48;5;2m"},
#line 336 "pinkfish_codes.gperf"
      {"BG_39", "\033[48;5;39m"},
#line 25 "pinkfish_codes.gperf"
      {"B_BLUE", "\033[48;5;4m"},
#line 23 "pinkfish_codes.gperf"
      {"B_GREEN", "\033[48;5;2m"},
#line 90 "pinkfish_codes.gperf"
      {"FG_49", "\033[38;5;49m"},
#line 43 "pinkfish_codes.gperf"
      {"FG_2", "\033[38;5;2m"},
#line 80 "pinkfish_codes.gperf"
      {"FG_39", "\033[38;5;39m"},
#line 34 "pinkfish_codes.gperf"
      {"UNDERLINE", "\033[4m"},
#line 316 "pinkfish_codes.gperf"
      {"BG_19", "\033[48;5;19m"},
#line 496 "pinkfish_codes.gperf"
      {"BG_199", "\033[48;5;199m"},
#line 495 "pinkfish_codes.gperf"
      {"BG_198", "\033[48;5;198m"},
#line 32 "pinkfish_codes.gperf"
      {"BOLD", "\033[1m"},
#line 60 "pinkfish_codes.gperf"
      {"FG_19", "\033[38;5;19m"},
#line 240 "pinkfish_codes.gperf"
      {"FG_199", "\033[38;5;199m"},
#line 239 "pinkfish_codes.gperf"
      {"FG_198", "\033[38;5;198m"},
#line 29 "pinkfish_codes.gperf"
      {"B_ORANGE", "\033[48;5;208m"},
#line 326 "pinkfish_codes.gperf"
      {"BG_29", "\033[48;5;29m"},
#line 27 "pinkfish_codes.gperf"
      {"B_CYAN", "\033[48;5;6m"},
#line 297 "pinkfish_codes.gperf"
      {"BG_0", "\033[48;5;0m"},
#line 70 "pinkfish_codes.gperf"
      {"FG_29", "\033[38;5;29m"},
#line 338 "pinkfish_codes.gperf"
      {"BG_41", "\033[48;5;41m"},
#line 41 "pinkfish_codes.gperf"
      {"FG_0", "\033[38;5;0m"},
#line 328 "pinkfish_codes.gperf"
      {"BG_31", "\033[48;5;31m"},
#line 487 "pinkfish_codes.gperf"
      {"BG_190", "\033[48;5;190m"},
#line 493 "pinkfish_codes.gperf"
      {"BG_196", "\033[48;5;196m"},
#line 82 "pinkfish_codes.gperf"
      {"FG_41", "\033[38;5;41m"},
#line 18 "pinkfish_codes.gperf"
      {"CYAN", "\033[38;5;6m"},
#line 72 "pinkfish_codes.gperf"
      {"FG_31", "\033[38;5;31m"},
#line 231 "pinkfish_codes.gperf"
      {"FG_190", "\033[38;5;190m"},
#line 237 "pinkfish_codes.gperf"
      {"FG_196", "\033[38;5;196m"},
#line 20 "pinkfish_codes.gperf"
      {"ORANGE", "\033[38;5;208m"},
#line 308 "pinkfish_codes.gperf"
      {"BG_11", "\033[48;5;11m"},
#line 416 "pinkfish_codes.gperf"
      {"BG_119", "\033[48;5;119m"},
#line 415 "pinkfish_codes.gperf"
      {"BG_118", "\033[48;5;118m"},
#line 52 "pinkfish_codes.gperf"
      {"FG_11", "\033[38;5;11m"},
#line 160 "pinkfish_codes.gperf"
      {"FG_119", "\033[38;5;119m"},
#line 159 "pinkfish_codes.gperf"
      {"FG_118", "\033[38;5;118m"},
#line 318 "pinkfish_codes.gperf"
      {"BG_21", "\033[48;5;21m"},
#line 516 "pinkfish_codes.gperf"
      {"BG_219", "\033[48;5;219m"},
#line 515 "pinkfish_codes.gperf"
      {"BG_218", "\033[48;5;218m"},
#line 62 "pinkfish_codes.gperf"
      {"FG_21", "\033[38;5;21m"},
#line 260 "pinkfish_codes.gperf"
      {"FG_219", "\033[38;5;219m"},
#line 259 "pinkfish_codes.gperf"
      {"FG_218", "\033[38;5;218m"},
#line 407 "pinkfish_codes.gperf"
      {"BG_110", "\033[48;5;110m"},
#line 413 "pinkfish_codes.gperf"
      {"BG_116", "\033[48;5;116m"},
#line 151 "pinkfish_codes.gperf"
      {"FG_110", "\033[38;5;110m"},
#line 157 "pinkfish_codes.gperf"
      {"FG_116", "\033[38;5;116m"},
#line 341 "pinkfish_codes.gperf"
      {"BG_44", "\033[48;5;44m"},
#line 331 "pinkfish_codes.gperf"
      {"BG_34", "\033[48;5;34m"},
#line 507 "pinkfish_codes.gperf"
      {"BG_210", "\033[48;5;210m"},
#line 513 "pinkfish_codes.gperf"
      {"BG_216", "\033[48;5;216m"},
#line 85 "pinkfish_codes.gperf"
      {"FG_44", "\033[38;5;44m"},
#line 75 "pinkfish_codes.gperf"
      {"FG_34", "\033[38;5;34m"},
#line 251 "pinkfish_codes.gperf"
      {"FG_210", "\033[38;5;210m"},
#line 257 "pinkfish_codes.gperf"
      {"FG_216", "\033[38;5;216m"},
#line 311 "pinkfish_codes.gperf"
      {"BG_14", "\033[48;5;14m"},
#line 446 "pinkfish_codes.gperf"
      {"BG_149", "\033[48;5;149m"},
#line 445 "pinkfish_codes.gperf"
      {"BG_148", "\033[48;5;148m"},
#line 55 "pinkfish_codes.gperf"
      {"FG_14", "\033[38;5;14m"},
#line 190 "pinkfish_codes.gperf"
      {"FG_149", "\033[38;5;149m"},
#line 189 "pinkfish_codes.gperf"
      {"FG_148", "\033[38;5;148m"},
#line 321 "pinkfish_codes.gperf"
      {"BG_24", "\033[48;5;24m"},
#line 546 "pinkfish_codes.gperf"
      {"BG_249", "\033[48;5;249m"},
#line 545 "pinkfish_codes.gperf"
      {"BG_248", "\033[48;5;248m"},
#line 65 "pinkfish_codes.gperf"
      {"FG_24", "\033[38;5;24m"},
#line 290 "pinkfish_codes.gperf"
      {"FG_249", "\033[38;5;249m"},
#line 289 "pinkfish_codes.gperf"
      {"FG_248", "\033[38;5;248m"},
#line 19 "pinkfish_codes.gperf"
      {"WHITE", "\033[38;5;7m"},
#line 437 "pinkfish_codes.gperf"
      {"BG_140", "\033[48;5;140m"},
#line 443 "pinkfish_codes.gperf"
      {"BG_146", "\033[48;5;146m"},
#line 181 "pinkfish_codes.gperf"
      {"FG_140", "\033[38;5;140m"},
#line 187 "pinkfish_codes.gperf"
      {"FG_146", "\033[38;5;146m"},
#line 340 "pinkfish_codes.gperf"
      {"BG_43", "\033[48;5;43m"},
#line 330 "pinkfish_codes.gperf"
      {"BG_33", "\033[48;5;33m"},
#line 537 "pinkfish_codes.gperf"
      {"BG_240", "\033[48;5;240m"},
#line 543 "pinkfish_codes.gperf"
      {"BG_246", "\033[48;5;246m"},
#line 84 "pinkfish_codes.gperf"
      {"FG_43", "\033[38;5;43m"},
#line 74 "pinkfish_codes.gperf"
      {"FG_33", "\033[38;5;33m"},
#line 281 "pinkfish_codes.gperf"
      {"FG_240", "\033[38;5;240m"},
#line 287 "pinkfish_codes.gperf"
      {"FG_246", "\033[38;5;246m"},
#line 310 "pinkfish_codes.gperf"
      {"BG_13", "\033[48;5;13m"},
#line 436 "pinkfish_codes.gperf"
      {"BG_139", "\033[48;5;139m"},
#line 435 "pinkfish_codes.gperf"
      {"BG_138", "\033[48;5;138m"},
#line 54 "pinkfish_codes.gperf"
      {"FG_13", "\033[38;5;13m"},
#line 180 "pinkfish_codes.gperf"
      {"FG_139", "\033[38;5;139m"},
#line 179 "pinkfish_codes.gperf"
      {"FG_138", "\033[38;5;138m"},
#line 320 "pinkfish_codes.gperf"
      {"BG_23", "\033[48;5;23m"},
#line 536 "pinkfish_codes.gperf"
      {"BG_239", "\033[48;5;239m"},
#line 535 "pinkfish_codes.gperf"
      {"BG_238", "\033[48;5;238m"},
#line 64 "pinkfish_codes.gperf"
      {"FG_23", "\033[38;5;23m"},
#line 280 "pinkfish_codes.gperf"
      {"FG_239", "\033[38;5;239m"},
#line 279 "pinkfish_codes.gperf"
      {"FG_238", "\033[38;5;238m"},
#line 427 "pinkfish_codes.gperf"
      {"BG_130", "\033[48;5;130m"},
#line 433 "pinkfish_codes.gperf"
      {"BG_136", "\033[48;5;136m"},
#line 171 "pinkfish_codes.gperf"
      {"FG_130", "\033[38;5;130m"},
#line 177 "pinkfish_codes.gperf"
      {"FG_136", "\033[38;5;136m"},
#line 339 "pinkfish_codes.gperf"
      {"BG_42", "\033[48;5;42m"},
#line 329 "pinkfish_codes.gperf"
      {"BG_32", "\033[48;5;32m"},
#line 527 "pinkfish_codes.gperf"
      {"BG_230", "\033[48;5;230m"},
#line 533 "pinkfish_codes.gperf"
      {"BG_236", "\033[48;5;236m"},
#line 83 "pinkfish_codes.gperf"
      {"FG_42", "\033[38;5;42m"},
#line 73 "pinkfish_codes.gperf"
      {"FG_32", "\033[38;5;32m"},
#line 271 "pinkfish_codes.gperf"
      {"FG_230", "\033[38;5;230m"},
#line 277 "pinkfish_codes.gperf"
      {"FG_236", "\033[38;5;236m"},
#line 309 "pinkfish_codes.gperf"
      {"BG_12", "\033[48;5;12m"},
#line 426 "pinkfish_codes.gperf"
      {"BG_129", "\033[48;5;129m"},
#line 425 "pinkfish_codes.gperf"
      {"BG_128", "\033[48;5;128m"},
#line 53 "pinkfish_codes.gperf"
      {"FG_12", "\033[38;5;12m"},
#line 170 "pinkfish_codes.gperf"
      {"FG_129", "\033[38;5;129m"},
#line 169 "pinkfish_codes.gperf"
      {"FG_128", "\033[38;5;128m"},
#line 319 "pinkfish_codes.gperf"
      {"BG_22", "\033[48;5;22m"},
#line 526 "pinkfish_codes.gperf"
      {"BG_229", "\033[48;5;229m"},
#line 525 "pinkfish_codes.gperf"
      {"BG_228", "\033[48;5;228m"},
#line 63 "pinkfish_codes.gperf"
      {"FG_22", "\033[38;5;22m"},
#line 270 "pinkfish_codes.gperf"
      {"FG_229", "\033[38;5;229m"},
#line 269 "pinkfish_codes.gperf"
      {"FG_228", "\033[38;5;228m"},
#line 417 "pinkfish_codes.gperf"
      {"BG_120", "\033[48;5;120m"},
#line 423 "pinkfish_codes.gperf"
      {"BG_126", "\033[48;5;126m"},
#line 161 "pinkfish_codes.gperf"
      {"FG_120", "\033[38;5;120m"},
#line 167 "pinkfish_codes.gperf"
      {"FG_126", "\033[38;5;126m"},
#line 337 "pinkfish_codes.gperf"
      {"BG_40", "\033[48;5;40m"},
#line 327 "pinkfish_codes.gperf"
      {"BG_30", "\033[48;5;30m"},
#line 517 "pinkfish_codes.gperf"
      {"BG_220", "\033[48;5;220m"},
#line 523 "pinkfish_codes.gperf"
      {"BG_226", "\033[48;5;226m"},
#line 81 "pinkfish_codes.gperf"
      {"FG_40", "\033[38;5;40m"},
#line 71 "pinkfish_codes.gperf"
      {"FG_30", "\033[38;5;30m"},
#line 261 "pinkfish_codes.gperf"
      {"FG_220", "\033[38;5;220m"},
#line 267 "pinkfish_codes.gperf"
      {"FG_226", "\033[38;5;226m"},
#line 307 "pinkfish_codes.gperf"
      {"BG_10", "\033[48;5;10m"},
#line 406 "pinkfish_codes.gperf"
      {"BG_109", "\033[48;5;109m"},
#line 405 "pinkfish_codes.gperf"
      {"BG_108", "\033[48;5;108m"},
#line 51 "pinkfish_codes.gperf"
      {"FG_10", "\033[38;5;10m"},
#line 150 "pinkfish_codes.gperf"
      {"FG_109", "\033[38;5;109m"},
#line 149 "pinkfish_codes.gperf"
      {"FG_108", "\033[38;5;108m"},
#line 317 "pinkfish_codes.gperf"
      {"BG_20", "\033[48;5;20m"},
#line 506 "pinkfish_codes.gperf"
      {"BG_209", "\033[48;5;209m"},
#line 505 "pinkfish_codes.gperf"
      {"BG_208", "\033[48;5;208m"},
#line 61 "pinkfish_codes.gperf"
      {"FG_20", "\033[38;5;20m"},
#line 250 "pinkfish_codes.gperf"
      {"FG_209", "\033[38;5;209m"},
#line 249 "pinkfish_codes.gperf"
      {"FG_208", "\033[38;5;208m"},
#line 397 "pinkfish_codes.gperf"
      {"BG_100", "\033[48;5;100m"},
#line 403 "pinkfish_codes.gperf"
      {"BG_106", "\033[48;5;106m"},
#line 141 "pinkfish_codes.gperf"
      {"FG_100", "\033[38;5;100m"},
#line 147 "pinkfish_codes.gperf"
      {"FG_106", "\033[38;5;106m"},
#line 497 "pinkfish_codes.gperf"
      {"BG_200", "\033[48;5;200m"},
#line 503 "pinkfish_codes.gperf"
      {"BG_206", "\033[48;5;206m"},
#line 241 "pinkfish_codes.gperf"
      {"FG_200", "\033[38;5;200m"},
#line 247 "pinkfish_codes.gperf"
      {"FG_206", "\033[38;5;206m"},
#line 344 "pinkfish_codes.gperf"
      {"BG_47", "\033[48;5;47m"},
#line 492 "pinkfish_codes.gperf"
      {"BG_195", "\033[48;5;195m"},
#line 334 "pinkfish_codes.gperf"
      {"BG_37", "\033[48;5;37m"},
#line 88 "pinkfish_codes.gperf"
      {"FG_47", "\033[38;5;47m"},
#line 236 "pinkfish_codes.gperf"
      {"FG_195", "\033[38;5;195m"},
#line 78 "pinkfish_codes.gperf"
      {"FG_37", "\033[38;5;37m"},
#line 37 "pinkfish_codes.gperf"
      {"WINDOW", ""},
#line 314 "pinkfish_codes.gperf"
      {"BG_17", "\033[48;5;17m"},
#line 476 "pinkfish_codes.gperf"
      {"BG_179", "\033[48;5;179m"},
#line 475 "pinkfish_codes.gperf"
      {"BG_178", "\033[48;5;178m"},
#line 15 "pinkfish_codes.gperf"
      {"YELLOW", "\033[38;5;3m"},
#line 58 "pinkfish_codes.gperf"
      {"FG_17", "\033[38;5;17m"},
#line 220 "pinkfish_codes.gperf"
      {"FG_179", "\033[38;5;179m"},
#line 219 "pinkfish_codes.gperf"
      {"FG_178", "\033[38;5;178m"},
#line 491 "pinkfish_codes.gperf"
      {"BG_194", "\033[48;5;194m"},
#line 324 "pinkfish_codes.gperf"
      {"BG_27", "\033[48;5;27m"},
#line 235 "pinkfish_codes.gperf"
      {"FG_194", "\033[38;5;194m"},
#line 68 "pinkfish_codes.gperf"
      {"FG_27", "\033[38;5;27m"},
#line 412 "pinkfish_codes.gperf"
      {"BG_115", "\033[48;5;115m"},
#line 38 "pinkfish_codes.gperf"
      {"ENDTERM", ""},
#line 467 "pinkfish_codes.gperf"
      {"BG_170", "\033[48;5;170m"},
#line 473 "pinkfish_codes.gperf"
      {"BG_176", "\033[48;5;176m"},
#line 156 "pinkfish_codes.gperf"
      {"FG_115", "\033[38;5;115m"},
#line 211 "pinkfish_codes.gperf"
      {"FG_170", "\033[38;5;170m"},
#line 217 "pinkfish_codes.gperf"
      {"FG_176", "\033[38;5;176m"},
#line 343 "pinkfish_codes.gperf"
      {"BG_46", "\033[48;5;46m"},
#line 512 "pinkfish_codes.gperf"
      {"BG_215", "\033[48;5;215m"},
#line 333 "pinkfish_codes.gperf"
      {"BG_36", "\033[48;5;36m"},
#line 87 "pinkfish_codes.gperf"
      {"FG_46", "\033[38;5;46m"},
#line 256 "pinkfish_codes.gperf"
      {"FG_215", "\033[38;5;215m"},
#line 77 "pinkfish_codes.gperf"
      {"FG_36", "\033[38;5;36m"},
#line 411 "pinkfish_codes.gperf"
      {"BG_114", "\033[48;5;114m"},
#line 313 "pinkfish_codes.gperf"
      {"BG_16", "\033[48;5;16m"},
#line 466 "pinkfish_codes.gperf"
      {"BG_169", "\033[48;5;169m"},
#line 465 "pinkfish_codes.gperf"
      {"BG_168", "\033[48;5;168m"},
#line 155 "pinkfish_codes.gperf"
      {"FG_114", "\033[38;5;114m"},
#line 57 "pinkfish_codes.gperf"
      {"FG_16", "\033[38;5;16m"},
#line 210 "pinkfish_codes.gperf"
      {"FG_169", "\033[38;5;169m"},
#line 209 "pinkfish_codes.gperf"
      {"FG_168", "\033[38;5;168m"},
#line 511 "pinkfish_codes.gperf"
      {"BG_214", "\033[48;5;214m"},
#line 323 "pinkfish_codes.gperf"
      {"BG_26", "\033[48;5;26m"},
#line 255 "pinkfish_codes.gperf"
      {"FG_214", "\033[38;5;214m"},
#line 67 "pinkfish_codes.gperf"
      {"FG_26", "\033[38;5;26m"},
#line 442 "pinkfish_codes.gperf"
      {"BG_145", "\033[48;5;145m"},
#line 457 "pinkfish_codes.gperf"
      {"BG_160", "\033[48;5;160m"},
#line 463 "pinkfish_codes.gperf"
      {"BG_166", "\033[48;5;166m"},
#line 186 "pinkfish_codes.gperf"
      {"FG_145", "\033[38;5;145m"},
#line 201 "pinkfish_codes.gperf"
      {"FG_160", "\033[38;5;160m"},
#line 207 "pinkfish_codes.gperf"
      {"FG_166", "\033[38;5;166m"},
#line 542 "pinkfish_codes.gperf"
      {"BG_245", "\033[48;5;245m"},
#line 286 "pinkfish_codes.gperf"
      {"FG_245", "\033[38;5;245m"},
#line 441 "pinkfish_codes.gperf"
      {"BG_144", "\033[48;5;144m"},
#line 185 "pinkfish_codes.gperf"
      {"FG_144", "\033[38;5;144m"},
#line 541 "pinkfish_codes.gperf"
      {"BG_244", "\033[48;5;244m"},
#line 285 "pinkfish_codes.gperf"
      {"FG_244", "\033[38;5;244m"},
#line 432 "pinkfish_codes.gperf"
      {"BG_135", "\033[48;5;135m"},
#line 176 "pinkfish_codes.gperf"
      {"FG_135", "\033[38;5;135m"},
#line 532 "pinkfish_codes.gperf"
      {"BG_235", "\033[48;5;235m"},
#line 276 "pinkfish_codes.gperf"
      {"FG_235", "\033[38;5;235m"},
#line 431 "pinkfish_codes.gperf"
      {"BG_134", "\033[48;5;134m"},
#line 175 "pinkfish_codes.gperf"
      {"FG_134", "\033[38;5;134m"},
#line 531 "pinkfish_codes.gperf"
      {"BG_234", "\033[48;5;234m"},
#line 275 "pinkfish_codes.gperf"
      {"FG_234", "\033[38;5;234m"},
#line 422 "pinkfish_codes.gperf"
      {"BG_125", "\033[48;5;125m"},
#line 166 "pinkfish_codes.gperf"
      {"FG_125", "\033[38;5;125m"},
#line 522 "pinkfish_codes.gperf"
      {"BG_225", "\033[48;5;225m"},
#line 266 "pinkfish_codes.gperf"
      {"FG_225", "\033[38;5;225m"},
#line 421 "pinkfish_codes.gperf"
      {"BG_124", "\033[48;5;124m"},
#line 165 "pinkfish_codes.gperf"
      {"FG_124", "\033[38;5;124m"},
#line 521 "pinkfish_codes.gperf"
      {"BG_224", "\033[48;5;224m"},
#line 265 "pinkfish_codes.gperf"
      {"FG_224", "\033[38;5;224m"},
#line 402 "pinkfish_codes.gperf"
      {"BG_105", "\033[48;5;105m"},
#line 146 "pinkfish_codes.gperf"
      {"FG_105", "\033[38;5;105m"},
#line 502 "pinkfish_codes.gperf"
      {"BG_205", "\033[48;5;205m"},
#line 246 "pinkfish_codes.gperf"
      {"FG_205", "\033[38;5;205m"},
#line 401 "pinkfish_codes.gperf"
      {"BG_104", "\033[48;5;104m"},
#line 145 "pinkfish_codes.gperf"
      {"FG_104", "\033[38;5;104m"},
#line 342 "pinkfish_codes.gperf"
      {"BG_45", "\033[48;5;45m"},
#line 332 "pinkfish_codes.gperf"
      {"BG_35", "\033[48;5;35m"},
#line 501 "pinkfish_codes.gperf"
      {"BG_204", "\033[48;5;204m"},
#line 86 "pinkfish_codes.gperf"
      {"FG_45", "\033[38;5;45m"},
#line 76 "pinkfish_codes.gperf"
      {"FG_35", "\033[38;5;35m"},
#line 245 "pinkfish_codes.gperf"
      {"FG_204", "\033[38;5;204m"},
#line 312 "pinkfish_codes.gperf"
      {"BG_15", "\033[48;5;15m"},
#line 456 "pinkfish_codes.gperf"
      {"BG_159", "\033[48;5;159m"},
#line 455 "pinkfish_codes.gperf"
      {"BG_158", "\033[48;5;158m"},
#line 56 "pinkfish_codes.gperf"
      {"FG_15", "\033[38;5;15m"},
#line 200 "pinkfish_codes.gperf"
      {"FG_159", "\033[38;5;159m"},
#line 199 "pinkfish_codes.gperf"
      {"FG_158", "\033[38;5;158m"},
#line 322 "pinkfish_codes.gperf"
      {"BG_25", "\033[48;5;25m"},
#line 490 "pinkfish_codes.gperf"
      {"BG_193", "\033[48;5;193m"},
#line 472 "pinkfish_codes.gperf"
      {"BG_175", "\033[48;5;175m"},
#line 66 "pinkfish_codes.gperf"
      {"FG_25", "\033[38;5;25m"},
#line 234 "pinkfish_codes.gperf"
      {"FG_193", "\033[38;5;193m"},
#line 216 "pinkfish_codes.gperf"
      {"FG_175", "\033[38;5;175m"},
#line 447 "pinkfish_codes.gperf"
      {"BG_150", "\033[48;5;150m"},
#line 453 "pinkfish_codes.gperf"
      {"BG_156", "\033[48;5;156m"},
#line 191 "pinkfish_codes.gperf"
      {"FG_150", "\033[38;5;150m"},
#line 197 "pinkfish_codes.gperf"
      {"FG_156", "\033[38;5;156m"},
#line 303 "pinkfish_codes.gperf"
      {"BG_6", "\033[48;5;6m"},
#line 547 "pinkfish_codes.gperf"
      {"BG_250", "\033[48;5;250m"},
#line 471 "pinkfish_codes.gperf"
      {"BG_174", "\033[48;5;174m"},
#line 47 "pinkfish_codes.gperf"
      {"FG_6", "\033[38;5;6m"},
#line 291 "pinkfish_codes.gperf"
      {"FG_250", "\033[38;5;250m"},
#line 215 "pinkfish_codes.gperf"
      {"FG_174", "\033[38;5;174m"},
#line 410 "pinkfish_codes.gperf"
      {"BG_113", "\033[48;5;113m"},
#line 154 "pinkfish_codes.gperf"
      {"FG_113", "\033[38;5;113m"},
#line 306 "pinkfish_codes.gperf"
      {"BG_9", "\033[48;5;9m"},
#line 366 "pinkfish_codes.gperf"
      {"BG_69", "\033[48;5;69m"},
#line 510 "pinkfish_codes.gperf"
      {"BG_213", "\033[48;5;213m"},
#line 462 "pinkfish_codes.gperf"
      {"BG_165", "\033[48;5;165m"},
#line 50 "pinkfish_codes.gperf"
      {"FG_9", "\033[38;5;9m"},
#line 110 "pinkfish_codes.gperf"
      {"FG_69", "\033[38;5;69m"},
#line 254 "pinkfish_codes.gperf"
      {"FG_213", "\033[38;5;213m"},
#line 206 "pinkfish_codes.gperf"
      {"FG_165", "\033[38;5;165m"},
#line 39 "pinkfish_codes.gperf"
      {"STATUS", ""},
#line 21 "pinkfish_codes.gperf"
      {"B_BLACK", "\033[48;5;0m"},
#line 24 "pinkfish_codes.gperf"
      {"B_YELLOW", "\033[48;5;3m"},
#line 396 "pinkfish_codes.gperf"
      {"BG_99", "\033[48;5;99m"},
#line 461 "pinkfish_codes.gperf"
      {"BG_164", "\033[48;5;164m"},
#line 140 "pinkfish_codes.gperf"
      {"FG_99", "\033[38;5;99m"},
#line 205 "pinkfish_codes.gperf"
      {"FG_164", "\033[38;5;164m"},
#line 358 "pinkfish_codes.gperf"
      {"BG_61", "\033[48;5;61m"},
#line 440 "pinkfish_codes.gperf"
      {"BG_143", "\033[48;5;143m"},
#line 102 "pinkfish_codes.gperf"
      {"FG_61", "\033[38;5;61m"},
#line 184 "pinkfish_codes.gperf"
      {"FG_143", "\033[38;5;143m"},
#line 540 "pinkfish_codes.gperf"
      {"BG_243", "\033[48;5;243m"},
#line 284 "pinkfish_codes.gperf"
      {"FG_243", "\033[38;5;243m"},
#line 36 "pinkfish_codes.gperf"
      {"INITTERM", ""},
#line 388 "pinkfish_codes.gperf"
      {"BG_91", "\033[48;5;91m"},
#line 132 "pinkfish_codes.gperf"
      {"FG_91", "\033[38;5;91m"},
#line 361 "pinkfish_codes.gperf"
      {"BG_64", "\033[48;5;64m"},
#line 430 "pinkfish_codes.gperf"
      {"BG_133", "\033[48;5;133m"},
#line 105 "pinkfish_codes.gperf"
      {"FG_64", "\033[38;5;64m"},
#line 174 "pinkfish_codes.gperf"
      {"FG_133", "\033[38;5;133m"},
#line 530 "pinkfish_codes.gperf"
      {"BG_233", "\033[48;5;233m"},
#line 274 "pinkfish_codes.gperf"
      {"FG_233", "\033[38;5;233m"},
#line 391 "pinkfish_codes.gperf"
      {"BG_94", "\033[48;5;94m"},
#line 135 "pinkfish_codes.gperf"
      {"FG_94", "\033[38;5;94m"},
#line 360 "pinkfish_codes.gperf"
      {"BG_63", "\033[48;5;63m"},
#line 420 "pinkfish_codes.gperf"
      {"BG_123", "\033[48;5;123m"},
#line 104 "pinkfish_codes.gperf"
      {"FG_63", "\033[38;5;63m"},
#line 164 "pinkfish_codes.gperf"
      {"FG_123", "\033[38;5;123m"},
#line 520 "pinkfish_codes.gperf"
      {"BG_223", "\033[48;5;223m"},
#line 264 "pinkfish_codes.gperf"
      {"FG_223", "\033[38;5;223m"},
#line 390 "pinkfish_codes.gperf"
      {"BG_93", "\033[48;5;93m"},
#line 134 "pinkfish_codes.gperf"
      {"FG_93", "\033[38;5;93m"},
#line 359 "pinkfish_codes.gperf"
      {"BG_62", "\033[48;5;62m"},
#line 400 "pinkfish_codes.gperf"
      {"BG_103", "\033[48;5;103m"},
#line 103 "pinkfish_codes.gperf"
      {"FG_62", "\033[38;5;62m"},
#line 144 "pinkfish_codes.gperf"
      {"FG_103", "\033[38;5;103m"},
#line 500 "pinkfish_codes.gperf"
      {"BG_203", "\033[48;5;203m"},
#line 244 "pinkfish_codes.gperf"
      {"FG_203", "\033[38;5;203m"},
#line 28 "pinkfish_codes.gperf"
      {"B_WHITE", "\033[48;5;7m"},
#line 389 "pinkfish_codes.gperf"
      {"BG_92", "\033[48;5;92m"},
#line 133 "pinkfish_codes.gperf"
      {"FG_92", "\033[38;5;92m"},
#line 452 "pinkfish_codes.gperf"
      {"BG_155", "\033[48;5;155m"},
#line 196 "pinkfish_codes.gperf"
      {"FG_155", "\033[38;5;155m"},
#line 357 "pinkfish_codes.gperf"
      {"BG_60", "\033[48;5;60m"},
#line 552 "pinkfish_codes.gperf"
      {"BG_255", "\033[48;5;255m"},
#line 101 "pinkfish_codes.gperf"
      {"FG_60", "\033[38;5;60m"},
#line 296 "pinkfish_codes.gperf"
      {"FG_255", "\033[38;5;255m"},
#line 451 "pinkfish_codes.gperf"
      {"BG_154", "\033[48;5;154m"},
#line 470 "pinkfish_codes.gperf"
      {"BG_173", "\033[48;5;173m"},
#line 195 "pinkfish_codes.gperf"
      {"FG_154", "\033[38;5;154m"},
#line 214 "pinkfish_codes.gperf"
      {"FG_173", "\033[38;5;173m"},
#line 305 "pinkfish_codes.gperf"
      {"BG_8", "\033[48;5;8m"},
#line 387 "pinkfish_codes.gperf"
      {"BG_90", "\033[48;5;90m"},
#line 551 "pinkfish_codes.gperf"
      {"BG_254", "\033[48;5;254m"},
#line 49 "pinkfish_codes.gperf"
      {"FG_8", "\033[38;5;8m"},
#line 131 "pinkfish_codes.gperf"
      {"FG_90", "\033[38;5;90m"},
#line 295 "pinkfish_codes.gperf"
      {"FG_254", "\033[38;5;254m"},
#line 345 "pinkfish_codes.gperf"
      {"BG_48", "\033[48;5;48m"},
#line 12 "pinkfish_codes.gperf"
      {"BLACK", "\033[38;5;0m"},
#line 335 "pinkfish_codes.gperf"
      {"BG_38", "\033[48;5;38m"},
#line 89 "pinkfish_codes.gperf"
      {"FG_48", "\033[38;5;48m"},
#line 79 "pinkfish_codes.gperf"
      {"FG_38", "\033[38;5;38m"},
#line 304 "pinkfish_codes.gperf"
      {"BG_7", "\033[48;5;7m"},
#line 386 "pinkfish_codes.gperf"
      {"BG_89", "\033[48;5;89m"},
#line 315 "pinkfish_codes.gperf"
      {"BG_18", "\033[48;5;18m"},
#line 486 "pinkfish_codes.gperf"
      {"BG_189", "\033[48;5;189m"},
#line 485 "pinkfish_codes.gperf"
      {"BG_188", "\033[48;5;188m"},
#line 48 "pinkfish_codes.gperf"
      {"FG_7", "\033[38;5;7m"},
#line 130 "pinkfish_codes.gperf"
      {"FG_89", "\033[38;5;89m"},
#line 59 "pinkfish_codes.gperf"
      {"FG_18", "\033[38;5;18m"},
#line 230 "pinkfish_codes.gperf"
      {"FG_189", "\033[38;5;189m"},
#line 229 "pinkfish_codes.gperf"
      {"FG_188", "\033[38;5;188m"},
#line 325 "pinkfish_codes.gperf"
      {"BG_28", "\033[48;5;28m"},
#line 364 "pinkfish_codes.gperf"
      {"BG_67", "\033[48;5;67m"},
#line 460 "pinkfish_codes.gperf"
      {"BG_163", "\033[48;5;163m"},
#line 69 "pinkfish_codes.gperf"
      {"FG_28", "\033[38;5;28m"},
#line 108 "pinkfish_codes.gperf"
      {"FG_67", "\033[38;5;67m"},
#line 204 "pinkfish_codes.gperf"
      {"FG_163", "\033[38;5;163m"},
#line 376 "pinkfish_codes.gperf"
      {"BG_79", "\033[48;5;79m"},
#line 489 "pinkfish_codes.gperf"
      {"BG_192", "\033[48;5;192m"},
#line 477 "pinkfish_codes.gperf"
      {"BG_180", "\033[48;5;180m"},
#line 483 "pinkfish_codes.gperf"
      {"BG_186", "\033[48;5;186m"},
#line 120 "pinkfish_codes.gperf"
      {"FG_79", "\033[38;5;79m"},
#line 233 "pinkfish_codes.gperf"
      {"FG_192", "\033[38;5;192m"},
#line 221 "pinkfish_codes.gperf"
      {"FG_180", "\033[38;5;180m"},
#line 227 "pinkfish_codes.gperf"
      {"FG_186", "\033[38;5;186m"},
#line 378 "pinkfish_codes.gperf"
      {"BG_81", "\033[48;5;81m"},
#line 394 "pinkfish_codes.gperf"
      {"BG_97", "\033[48;5;97m"},
#line 122 "pinkfish_codes.gperf"
      {"FG_81", "\033[38;5;81m"},
#line 138 "pinkfish_codes.gperf"
      {"FG_97", "\033[38;5;97m"},
#line 368 "pinkfish_codes.gperf"
      {"BG_71", "\033[48;5;71m"},
#line 409 "pinkfish_codes.gperf"
      {"BG_112", "\033[48;5;112m"},
#line 363 "pinkfish_codes.gperf"
      {"BG_66", "\033[48;5;66m"},
#line 112 "pinkfish_codes.gperf"
      {"FG_71", "\033[38;5;71m"},
#line 153 "pinkfish_codes.gperf"
      {"FG_112", "\033[38;5;112m"},
#line 107 "pinkfish_codes.gperf"
      {"FG_66", "\033[38;5;66m"},
#line 509 "pinkfish_codes.gperf"
      {"BG_212", "\033[48;5;212m"},
#line 253 "pinkfish_codes.gperf"
      {"FG_212", "\033[38;5;212m"},
#line 381 "pinkfish_codes.gperf"
      {"BG_84", "\033[48;5;84m"},
#line 393 "pinkfish_codes.gperf"
      {"BG_96", "\033[48;5;96m"},
#line 125 "pinkfish_codes.gperf"
      {"FG_84", "\033[38;5;84m"},
#line 137 "pinkfish_codes.gperf"
      {"FG_96", "\033[38;5;96m"},
#line 371 "pinkfish_codes.gperf"
      {"BG_74", "\033[48;5;74m"},
#line 439 "pinkfish_codes.gperf"
      {"BG_142", "\033[48;5;142m"},
#line 115 "pinkfish_codes.gperf"
      {"FG_74", "\033[38;5;74m"},
#line 183 "pinkfish_codes.gperf"
      {"FG_142", "\033[38;5;142m"},
#line 539 "pinkfish_codes.gperf"
      {"BG_242", "\033[48;5;242m"},
#line 283 "pinkfish_codes.gperf"
      {"FG_242", "\033[38;5;242m"},
#line 380 "pinkfish_codes.gperf"
      {"BG_83", "\033[48;5;83m"},
#line 124 "pinkfish_codes.gperf"
      {"FG_83", "\033[38;5;83m"},
#line 370 "pinkfish_codes.gperf"
      {"BG_73", "\033[48;5;73m"},
#line 429 "pinkfish_codes.gperf"
      {"BG_132", "\033[48;5;132m"},
#line 114 "pinkfish_codes.gperf"
      {"FG_73", "\033[38;5;73m"},
#line 173 "pinkfish_codes.gperf"
      {"FG_132", "\033[38;5;132m"},
#line 529 "pinkfish_codes.gperf"
      {"BG_232", "\033[48;5;232m"},
#line 273 "pinkfish_codes.gperf"
      {"FG_232", "\033[38;5;232m"},
#line 379 "pinkfish_codes.gperf"
      {"BG_82", "\033[48;5;82m"},
#line 123 "pinkfish_codes.gperf"
      {"FG_82", "\033[38;5;82m"},
#line 369 "pinkfish_codes.gperf"
      {"BG_72", "\033[48;5;72m"},
#line 419 "pinkfish_codes.gperf"
      {"BG_122", "\033[48;5;122m"},
#line 113 "pinkfish_codes.gperf"
      {"FG_72", "\033[38;5;72m"},
#line 163 "pinkfish_codes.gperf"
      {"FG_122", "\033[38;5;122m"},
#line 519 "pinkfish_codes.gperf"
      {"BG_222", "\033[48;5;222m"},
#line 263 "pinkfish_codes.gperf"
      {"FG_222", "\033[38;5;222m"},
#line 377 "pinkfish_codes.gperf"
      {"BG_80", "\033[48;5;80m"},
#line 450 "pinkfish_codes.gperf"
      {"BG_153", "\033[48;5;153m"},
#line 121 "pinkfish_codes.gperf"
      {"FG_80", "\033[38;5;80m"},
#line 194 "pinkfish_codes.gperf"
      {"FG_153", "\033[38;5;153m"},
#line 550 "pinkfish_codes.gperf"
      {"BG_253", "\033[48;5;253m"},
#line 294 "pinkfish_codes.gperf"
      {"FG_253", "\033[38;5;253m"},
#line 367 "pinkfish_codes.gperf"
      {"BG_70", "\033[48;5;70m"},
#line 399 "pinkfish_codes.gperf"
      {"BG_102", "\033[48;5;102m"},
#line 111 "pinkfish_codes.gperf"
      {"FG_70", "\033[38;5;70m"},
#line 143 "pinkfish_codes.gperf"
      {"FG_102", "\033[38;5;102m"},
#line 499 "pinkfish_codes.gperf"
      {"BG_202", "\033[48;5;202m"},
#line 243 "pinkfish_codes.gperf"
      {"FG_202", "\033[38;5;202m"},
#line 362 "pinkfish_codes.gperf"
      {"BG_65", "\033[48;5;65m"},
#line 488 "pinkfish_codes.gperf"
      {"BG_191", "\033[48;5;191m"},
#line 482 "pinkfish_codes.gperf"
      {"BG_185", "\033[48;5;185m"},
#line 106 "pinkfish_codes.gperf"
      {"FG_65", "\033[38;5;65m"},
#line 232 "pinkfish_codes.gperf"
      {"FG_191", "\033[38;5;191m"},
#line 226 "pinkfish_codes.gperf"
      {"FG_185", "\033[38;5;185m"},
#line 302 "pinkfish_codes.gperf"
      {"BG_5", "\033[48;5;5m"},
#line 384 "pinkfish_codes.gperf"
      {"BG_87", "\033[48;5;87m"},
#line 46 "pinkfish_codes.gperf"
      {"FG_5", "\033[38;5;5m"},
#line 30 "pinkfish_codes.gperf"
      {"FLASH", "\033[5m"},
#line 128 "pinkfish_codes.gperf"
      {"FG_87", "\033[38;5;87m"},
#line 392 "pinkfish_codes.gperf"
      {"BG_95", "\033[48;5;95m"},
#line 494 "pinkfish_codes.gperf"
      {"BG_197", "\033[48;5;197m"},
#line 481 "pinkfish_codes.gperf"
      {"BG_184", "\033[48;5;184m"},
#line 136 "pinkfish_codes.gperf"
      {"FG_95", "\033[38;5;95m"},
#line 238 "pinkfish_codes.gperf"
      {"FG_197", "\033[38;5;197m"},
#line 225 "pinkfish_codes.gperf"
      {"FG_184", "\033[38;5;184m"},
#line 356 "pinkfish_codes.gperf"
      {"BG_59", "\033[48;5;59m"},
#line 408 "pinkfish_codes.gperf"
      {"BG_111", "\033[48;5;111m"},
#line 374 "pinkfish_codes.gperf"
      {"BG_77", "\033[48;5;77m"},
#line 469 "pinkfish_codes.gperf"
      {"BG_172", "\033[48;5;172m"},
#line 100 "pinkfish_codes.gperf"
      {"FG_59", "\033[38;5;59m"},
#line 152 "pinkfish_codes.gperf"
      {"FG_111", "\033[38;5;111m"},
#line 118 "pinkfish_codes.gperf"
      {"FG_77", "\033[38;5;77m"},
#line 213 "pinkfish_codes.gperf"
      {"FG_172", "\033[38;5;172m"},
#line 40 "pinkfish_codes.gperf"
      {"FG_-1", ""},
#line 508 "pinkfish_codes.gperf"
      {"BG_211", "\033[48;5;211m"},
#line 252 "pinkfish_codes.gperf"
      {"FG_211", "\033[38;5;211m"},
#line 414 "pinkfish_codes.gperf"
      {"BG_117", "\033[48;5;117m"},
#line 383 "pinkfish_codes.gperf"
      {"BG_86", "\033[48;5;86m"},
#line 158 "pinkfish_codes.gperf"
      {"FG_117", "\033[38;5;117m"},
#line 127 "pinkfish_codes.gperf"
      {"FG_86", "\033[38;5;86m"},
#line 348 "pinkfish_codes.gperf"
      {"BG_51", "\033[48;5;51m"},
#line 514 "pinkfish_codes.gperf"
      {"BG_217", "\033[48;5;217m"},
#line 92 "pinkfish_codes.gperf"
      {"FG_51", "\033[38;5;51m"},
#line 258 "pinkfish_codes.gperf"
      {"FG_217", "\033[38;5;217m"},
#line 438 "pinkfish_codes.gperf"
      {"BG_141", "\033[48;5;141m"},
#line 373 "pinkfish_codes.gperf"
      {"BG_76", "\033[48;5;76m"},
#line 459 "pinkfish_codes.gperf"
      {"BG_162", "\033[48;5;162m"},
#line 182 "pinkfish_codes.gperf"
      {"FG_141", "\033[38;5;141m"},
#line 117 "pinkfish_codes.gperf"
      {"FG_76", "\033[38;5;76m"},
#line 203 "pinkfish_codes.gperf"
      {"FG_162", "\033[38;5;162m"},
#line 538 "pinkfish_codes.gperf"
      {"BG_241", "\033[48;5;241m"},
#line 282 "pinkfish_codes.gperf"
      {"FG_241", "\033[38;5;241m"},
#line 444 "pinkfish_codes.gperf"
      {"BG_147", "\033[48;5;147m"},
#line 188 "pinkfish_codes.gperf"
      {"FG_147", "\033[38;5;147m"},
#line 351 "pinkfish_codes.gperf"
      {"BG_54", "\033[48;5;54m"},
#line 544 "pinkfish_codes.gperf"
      {"BG_247", "\033[48;5;247m"},
#line 95 "pinkfish_codes.gperf"
      {"FG_54", "\033[38;5;54m"},
#line 288 "pinkfish_codes.gperf"
      {"FG_247", "\033[38;5;247m"},
#line 428 "pinkfish_codes.gperf"
      {"BG_131", "\033[48;5;131m"},
#line 172 "pinkfish_codes.gperf"
      {"FG_131", "\033[38;5;131m"},
#line 528 "pinkfish_codes.gperf"
      {"BG_231", "\033[48;5;231m"},
#line 272 "pinkfish_codes.gperf"
      {"FG_231", "\033[38;5;231m"},
#line 434 "pinkfish_codes.gperf"
      {"BG_137", "\033[48;5;137m"},
#line 178 "pinkfish_codes.gperf"
      {"FG_137", "\033[38;5;137m"},
#line 350 "pinkfish_codes.gperf"
      {"BG_53", "\033[48;5;53m"},
#line 534 "pinkfish_codes.gperf"
      {"BG_237", "\033[48;5;237m"},
#line 94 "pinkfish_codes.gperf"
      {"FG_53", "\033[38;5;53m"},
#line 278 "pinkfish_codes.gperf"
      {"FG_237", "\033[38;5;237m"},
#line 418 "pinkfish_codes.gperf"
      {"BG_121", "\033[48;5;121m"},
#line 162 "pinkfish_codes.gperf"
      {"FG_121", "\033[38;5;121m"},
#line 518 "pinkfish_codes.gperf"
      {"BG_221", "\033[48;5;221m"},
#line 262 "pinkfish_codes.gperf"
      {"FG_221", "\033[38;5;221m"},
#line 424 "pinkfish_codes.gperf"
      {"BG_127", "\033[48;5;127m"},
#line 168 "pinkfish_codes.gperf"
      {"FG_127", "\033[38;5;127m"},
#line 349 "pinkfish_codes.gperf"
      {"BG_52", "\033[48;5;52m"},
#line 524 "pinkfish_codes.gperf"
      {"BG_227", "\033[48;5;227m"},
#line 93 "pinkfish_codes.gperf"
      {"FG_52", "\033[38;5;52m"},
#line 268 "pinkfish_codes.gperf"
      {"FG_227", "\033[38;5;227m"},
#line 398 "pinkfish_codes.gperf"
      {"BG_101", "\033[48;5;101m"},
#line 142 "pinkfish_codes.gperf"
      {"FG_101", "\033[38;5;101m"},
#line 498 "pinkfish_codes.gperf"
      {"BG_201", "\033[48;5;201m"},
#line 242 "pinkfish_codes.gperf"
      {"FG_201", "\033[38;5;201m"},
#line 404 "pinkfish_codes.gperf"
      {"BG_107", "\033[48;5;107m"},
#line 148 "pinkfish_codes.gperf"
      {"FG_107", "\033[38;5;107m"},
#line 347 "pinkfish_codes.gperf"
      {"BG_50", "\033[48;5;50m"},
#line 504 "pinkfish_codes.gperf"
      {"BG_207", "\033[48;5;207m"},
#line 91 "pinkfish_codes.gperf"
      {"FG_50", "\033[38;5;50m"},
#line 248 "pinkfish_codes.gperf"
      {"FG_207", "\033[38;5;207m"},
#line 382 "pinkfish_codes.gperf"
      {"BG_85", "\033[48;5;85m"},
#line 126 "pinkfish_codes.gperf"
      {"FG_85", "\033[38;5;85m"},
#line 480 "pinkfish_codes.gperf"
      {"BG_183", "\033[48;5;183m"},
#line 468 "pinkfish_codes.gperf"
      {"BG_171", "\033[48;5;171m"},
#line 224 "pinkfish_codes.gperf"
      {"FG_183", "\033[38;5;183m"},
#line 212 "pinkfish_codes.gperf"
      {"FG_171", "\033[38;5;171m"},
#line 372 "pinkfish_codes.gperf"
      {"BG_75", "\033[48;5;75m"},
#line 449 "pinkfish_codes.gperf"
      {"BG_152", "\033[48;5;152m"},
#line 116 "pinkfish_codes.gperf"
      {"FG_75", "\033[38;5;75m"},
#line 193 "pinkfish_codes.gperf"
      {"FG_152", "\033[38;5;152m"},
#line 549 "pinkfish_codes.gperf"
      {"BG_252", "\033[48;5;252m"},
#line 474 "pinkfish_codes.gperf"
      {"BG_177", "\033[48;5;177m"},
#line 293 "pinkfish_codes.gperf"
      {"FG_252", "\033[38;5;252m"},
#line 218 "pinkfish_codes.gperf"
      {"FG_177", "\033[38;5;177m"},
#line 354 "pinkfish_codes.gperf"
      {"BG_57", "\033[48;5;57m"},
#line 98 "pinkfish_codes.gperf"
      {"FG_57", "\033[38;5;57m"},
#line 365 "pinkfish_codes.gperf"
      {"BG_68", "\033[48;5;68m"},
#line 458 "pinkfish_codes.gperf"
      {"BG_161", "\033[48;5;161m"},
#line 109 "pinkfish_codes.gperf"
      {"FG_68", "\033[38;5;68m"},
#line 202 "pinkfish_codes.gperf"
      {"FG_161", "\033[38;5;161m"},
#line 395 "pinkfish_codes.gperf"
      {"BG_98", "\033[48;5;98m"},
#line 464 "pinkfish_codes.gperf"
      {"BG_167", "\033[48;5;167m"},
#line 139 "pinkfish_codes.gperf"
      {"FG_98", "\033[38;5;98m"},
#line 208 "pinkfish_codes.gperf"
      {"FG_167", "\033[38;5;167m"},
#line 353 "pinkfish_codes.gperf"
      {"BG_56", "\033[48;5;56m"},
#line 97 "pinkfish_codes.gperf"
      {"FG_56", "\033[38;5;56m"},
#line 448 "pinkfish_codes.gperf"
      {"BG_151", "\033[48;5;151m"},
#line 192 "pinkfish_codes.gperf"
      {"FG_151", "\033[38;5;151m"},
#line 548 "pinkfish_codes.gperf"
      {"BG_251", "\033[48;5;251m"},
#line 292 "pinkfish_codes.gperf"
      {"FG_251", "\033[38;5;251m"},
#line 454 "pinkfish_codes.gperf"
      {"BG_157", "\033[48;5;157m"},
#line 198 "pinkfish_codes.gperf"
      {"FG_157", "\033[38;5;157m"},
#line 352 "pinkfish_codes.gperf"
      {"BG_55", "\033[48;5;55m"},
#line 96 "pinkfish_codes.gperf"
      {"FG_55", "\033[38;5;55m"},
#line 385 "pinkfish_codes.gperf"
      {"BG_88", "\033[48;5;88m"},
#line 129 "pinkfish_codes.gperf"
      {"FG_88", "\033[38;5;88m"},
#line 375 "pinkfish_codes.gperf"
      {"BG_78", "\033[48;5;78m"},
#line 479 "pinkfish_codes.gperf"
      {"BG_182", "\033[48;5;182m"},
#line 119 "pinkfish_codes.gperf"
      {"FG_78", "\033[38;5;78m"},
#line 223 "pinkfish_codes.gperf"
      {"FG_182", "\033[38;5;182m"},
#line 31 "pinkfish_codes.gperf"
      {"ITALIC", "\033[3m"},
#line 478 "pinkfish_codes.gperf"
      {"BG_181", "\033[48;5;181m"},
#line 222 "pinkfish_codes.gperf"
      {"FG_181", "\033[38;5;181m"},
#line 484 "pinkfish_codes.gperf"
      {"BG_187", "\033[48;5;187m"},
#line 228 "pinkfish_codes.gperf"
      {"FG_187", "\033[38;5;187m"},
#line 355 "pinkfish_codes.gperf"
      {"BG_58", "\033[48;5;58m"},
#line 99 "pinkfish_codes.gperf"
      {"FG_58", "\033[38;5;58m"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = pinkfish_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct pinkfish_code *resword;

          switch (key - 3)
            {
              case 0:
                if (len == 3)
                  {
                    resword = &pinkfish_codes[0];
                    goto compare;
                  }
                break;
              case 1:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[1];
                    goto compare;
                  }
                break;
              case 4:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[2];
                    goto compare;
                  }
                break;
              case 5:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[3];
                    goto compare;
                  }
                break;
              case 6:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[4];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[5];
                    goto compare;
                  }
                break;
              case 9:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[6];
                    goto compare;
                  }
                break;
              case 11:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[7];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 9)
                  {
                    resword = &pinkfish_codes[8];
                    goto compare;
                  }
                break;
              case 16:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[9];
                    goto compare;
                  }
                break;
              case 17:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[10];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 7)
                  {
                    resword = &pinkfish_codes[11];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[12];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 7)
                  {
                    resword = &pinkfish_codes[13];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[14];
                    goto compare;
                  }
                break;
              case 26:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[15];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[16];
                    goto compare;
                  }
                break;
              case 28:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[17];
                    goto compare;
                  }
                break;
              case 29:
                if (len == 7)
                  {
                    resword = &pinkfish_codes[18];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[19];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[20];
                    goto compare;
                  }
                break;
              case 32:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[21];
                    goto compare;
                  }
                break;
              case 36:
                if (len == 9)
                  {
                    resword = &pinkfish_codes[22];
                    goto compare;
                  }
                break;
              case 37:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[23];
                    goto compare;
                  }
                break;
              case 38:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[24];
                    goto compare;
                  }
                break;
              case 39:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[25];
                    goto compare;
                  }
                break;
              case 41:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[26];
                    goto compare;
                  }
                break;
              case 42:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[27];
                    goto compare;
                  }
                break;
              case 43:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[28];
                    goto compare;
                  }
                break;
              case 44:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[29];
                    goto compare;
                  }
                break;
              case 46:
                if (len == 8)
                  {
                    resword = &pinkfish_codes[30];
                    goto compare;
                  }
                break;
              case 47:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[31];
                    goto compare;
                  }
                break;
              case 49:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[32];
                    goto compare;
                  }
                break;
              case 51:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[33];
                    goto compare;
                  }
                break;
              case 52:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[34];
                    goto compare;
                  }
                break;
              case 55:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[35];
                    goto compare;
                  }
                break;
              case 56:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[36];
                    goto compare;
                  }
                break;
              case 57:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[37];
                    goto compare;
                  }
                break;
              case 58:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[38];
                    goto compare;
                  }
                break;
              case 59:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[39];
                    goto compare;
                  }
                break;
              case 60:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[40];
                    goto compare;
                  }
                break;
              case 61:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[41];
                    goto compare;
                  }
                break;
              case 62:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[42];
                    goto compare;
                  }
                break;
              case 63:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[43];
                    goto compare;
                  }
                break;
              case 64:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[44];
                    goto compare;
                  }
                break;
              case 66:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[45];
                    goto compare;
                  }
                break;
              case 67:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[46];
                    goto compare;
                  }
                break;
              case 68:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[47];
                    goto compare;
                  }
                break;
              case 69:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[48];
                    goto compare;
                  }
                break;
              case 72:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[49];
                    goto compare;
                  }
                break;
              case 73:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[50];
                    goto compare;
                  }
                break;
              case 74:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[51];
                    goto compare;
                  }
                break;
              case 77:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[52];
                    goto compare;
                  }
                break;
              case 78:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[53];
                    goto compare;
                  }
                break;
              case 79:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[54];
                    goto compare;
                  }
                break;
              case 82:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[55];
                    goto compare;
                  }
                break;
              case 83:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[56];
                    goto compare;
                  }
                break;
              case 84:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[57];
                    goto compare;
                  }
                break;
              case 88:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[58];
                    goto compare;
                  }
                break;
              case 89:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[59];
                    goto compare;
                  }
                break;
              case 93:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[60];
                    goto compare;
                  }
                break;
              case 94:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[61];
                    goto compare;
                  }
                break;
              case 95:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[62];
                    goto compare;
                  }
                break;
              case 97:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[63];
                    goto compare;
                  }
                break;
              case 98:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[64];
                    goto compare;
                  }
                break;
              case 99:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[65];
                    goto compare;
                  }
                break;
              case 100:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[66];
                    goto compare;
                  }
                break;
              case 102:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[67];
                    goto compare;
                  }
                break;
              case 103:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[68];
                    goto compare;
                  }
                break;
              case 104:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[69];
                    goto compare;
                  }
                break;
              case 107:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[70];
                    goto compare;
                  }
                break;
              case 108:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[71];
                    goto compare;
                  }
                break;
              case 109:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[72];
                    goto compare;
                  }
                break;
              case 112:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[73];
                    goto compare;
                  }
                break;
              case 113:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[74];
                    goto compare;
                  }
                break;
              case 114:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[75];
                    goto compare;
                  }
                break;
              case 117:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[76];
                    goto compare;
                  }
                break;
              case 118:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[77];
                    goto compare;
                  }
                break;
              case 119:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[78];
                    goto compare;
                  }
                break;
              case 122:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[79];
                    goto compare;
                  }
                break;
              case 123:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[80];
                    goto compare;
                  }
                break;
              case 124:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[81];
                    goto compare;
                  }
                break;
              case 127:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[82];
                    goto compare;
                  }
                break;
              case 128:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[83];
                    goto compare;
                  }
                break;
              case 129:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[84];
                    goto compare;
                  }
                break;
              case 133:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[85];
                    goto compare;
                  }
                break;
              case 134:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[86];
                    goto compare;
                  }
                break;
              case 135:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[87];
                    goto compare;
                  }
                break;
              case 137:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[88];
                    goto compare;
                  }
                break;
              case 138:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[89];
                    goto compare;
                  }
                break;
              case 139:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[90];
                    goto compare;
                  }
                break;
              case 140:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[91];
                    goto compare;
                  }
                break;
              case 142:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[92];
                    goto compare;
                  }
                break;
              case 143:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[93];
                    goto compare;
                  }
                break;
              case 144:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[94];
                    goto compare;
                  }
                break;
              case 147:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[95];
                    goto compare;
                  }
                break;
              case 148:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[96];
                    goto compare;
                  }
                break;
              case 149:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[97];
                    goto compare;
                  }
                break;
              case 152:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[98];
                    goto compare;
                  }
                break;
              case 153:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[99];
                    goto compare;
                  }
                break;
              case 154:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[100];
                    goto compare;
                  }
                break;
              case 157:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[101];
                    goto compare;
                  }
                break;
              case 158:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[102];
                    goto compare;
                  }
                break;
              case 159:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[103];
                    goto compare;
                  }
                break;
              case 162:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[104];
                    goto compare;
                  }
                break;
              case 163:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[105];
                    goto compare;
                  }
                break;
              case 164:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[106];
                    goto compare;
                  }
                break;
              case 168:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[107];
                    goto compare;
                  }
                break;
              case 169:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[108];
                    goto compare;
                  }
                break;
              case 173:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[109];
                    goto compare;
                  }
                break;
              case 174:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[110];
                    goto compare;
                  }
                break;
              case 175:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[111];
                    goto compare;
                  }
                break;
              case 177:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[112];
                    goto compare;
                  }
                break;
              case 178:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[113];
                    goto compare;
                  }
                break;
              case 179:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[114];
                    goto compare;
                  }
                break;
              case 180:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[115];
                    goto compare;
                  }
                break;
              case 182:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[116];
                    goto compare;
                  }
                break;
              case 183:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[117];
                    goto compare;
                  }
                break;
              case 184:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[118];
                    goto compare;
                  }
                break;
              case 187:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[119];
                    goto compare;
                  }
                break;
              case 188:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[120];
                    goto compare;
                  }
                break;
              case 189:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[121];
                    goto compare;
                  }
                break;
              case 192:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[122];
                    goto compare;
                  }
                break;
              case 193:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[123];
                    goto compare;
                  }
                break;
              case 194:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[124];
                    goto compare;
                  }
                break;
              case 197:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[125];
                    goto compare;
                  }
                break;
              case 198:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[126];
                    goto compare;
                  }
                break;
              case 199:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[127];
                    goto compare;
                  }
                break;
              case 202:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[128];
                    goto compare;
                  }
                break;
              case 203:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[129];
                    goto compare;
                  }
                break;
              case 204:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[130];
                    goto compare;
                  }
                break;
              case 208:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[131];
                    goto compare;
                  }
                break;
              case 209:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[132];
                    goto compare;
                  }
                break;
              case 213:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[133];
                    goto compare;
                  }
                break;
              case 214:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[134];
                    goto compare;
                  }
                break;
              case 215:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[135];
                    goto compare;
                  }
                break;
              case 217:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[136];
                    goto compare;
                  }
                break;
              case 218:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[137];
                    goto compare;
                  }
                break;
              case 219:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[138];
                    goto compare;
                  }
                break;
              case 220:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[139];
                    goto compare;
                  }
                break;
              case 222:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[140];
                    goto compare;
                  }
                break;
              case 223:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[141];
                    goto compare;
                  }
                break;
              case 224:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[142];
                    goto compare;
                  }
                break;
              case 227:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[143];
                    goto compare;
                  }
                break;
              case 228:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[144];
                    goto compare;
                  }
                break;
              case 229:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[145];
                    goto compare;
                  }
                break;
              case 232:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[146];
                    goto compare;
                  }
                break;
              case 233:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[147];
                    goto compare;
                  }
                break;
              case 234:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[148];
                    goto compare;
                  }
                break;
              case 237:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[149];
                    goto compare;
                  }
                break;
              case 238:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[150];
                    goto compare;
                  }
                break;
              case 239:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[151];
                    goto compare;
                  }
                break;
              case 242:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[152];
                    goto compare;
                  }
                break;
              case 243:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[153];
                    goto compare;
                  }
                break;
              case 244:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[154];
                    goto compare;
                  }
                break;
              case 248:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[155];
                    goto compare;
                  }
                break;
              case 249:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[156];
                    goto compare;
                  }
                break;
              case 253:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[157];
                    goto compare;
                  }
                break;
              case 254:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[158];
                    goto compare;
                  }
                break;
              case 258:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[159];
                    goto compare;
                  }
                break;
              case 259:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[160];
                    goto compare;
                  }
                break;
              case 263:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[161];
                    goto compare;
                  }
                break;
              case 264:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[162];
                    goto compare;
                  }
                break;
              case 267:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[163];
                    goto compare;
                  }
                break;
              case 268:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[164];
                    goto compare;
                  }
                break;
              case 269:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[165];
                    goto compare;
                  }
                break;
              case 272:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[166];
                    goto compare;
                  }
                break;
              case 273:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[167];
                    goto compare;
                  }
                break;
              case 274:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[168];
                    goto compare;
                  }
                break;
              case 278:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[169];
                    goto compare;
                  }
                break;
              case 279:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[170];
                    goto compare;
                  }
                break;
              case 280:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[171];
                    goto compare;
                  }
                break;
              case 281:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[172];
                    goto compare;
                  }
                break;
              case 283:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[173];
                    goto compare;
                  }
                break;
              case 284:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[174];
                    goto compare;
                  }
                break;
              case 285:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[175];
                    goto compare;
                  }
                break;
              case 286:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[176];
                    goto compare;
                  }
                break;
              case 288:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[177];
                    goto compare;
                  }
                break;
              case 289:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[178];
                    goto compare;
                  }
                break;
              case 293:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[179];
                    goto compare;
                  }
                break;
              case 294:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[180];
                    goto compare;
                  }
                break;
              case 298:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[181];
                    goto compare;
                  }
                break;
              case 299:
                if (len == 7)
                  {
                    resword = &pinkfish_codes[182];
                    goto compare;
                  }
                break;
              case 300:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[183];
                    goto compare;
                  }
                break;
              case 301:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[184];
                    goto compare;
                  }
                break;
              case 303:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[185];
                    goto compare;
                  }
                break;
              case 305:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[186];
                    goto compare;
                  }
                break;
              case 306:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[187];
                    goto compare;
                  }
                break;
              case 307:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[188];
                    goto compare;
                  }
                break;
              case 308:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[189];
                    goto compare;
                  }
                break;
              case 309:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[190];
                    goto compare;
                  }
                break;
              case 312:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[191];
                    goto compare;
                  }
                break;
              case 313:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[192];
                    goto compare;
                  }
                break;
              case 314:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[193];
                    goto compare;
                  }
                break;
              case 318:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[194];
                    goto compare;
                  }
                break;
              case 319:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[195];
                    goto compare;
                  }
                break;
              case 320:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[196];
                    goto compare;
                  }
                break;
              case 321:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[197];
                    goto compare;
                  }
                break;
              case 323:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[198];
                    goto compare;
                  }
                break;
              case 324:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[199];
                    goto compare;
                  }
                break;
              case 325:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[200];
                    goto compare;
                  }
                break;
              case 326:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[201];
                    goto compare;
                  }
                break;
              case 328:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[202];
                    goto compare;
                  }
                break;
              case 329:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[203];
                    goto compare;
                  }
                break;
              case 333:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[204];
                    goto compare;
                  }
                break;
              case 334:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[205];
                    goto compare;
                  }
                break;
              case 338:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[206];
                    goto compare;
                  }
                break;
              case 340:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[207];
                    goto compare;
                  }
                break;
              case 341:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[208];
                    goto compare;
                  }
                break;
              case 343:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[209];
                    goto compare;
                  }
                break;
              case 345:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[210];
                    goto compare;
                  }
                break;
              case 346:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[211];
                    goto compare;
                  }
                break;
              case 348:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[212];
                    goto compare;
                  }
                break;
              case 353:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[213];
                    goto compare;
                  }
                break;
              case 358:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[214];
                    goto compare;
                  }
                break;
              case 363:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[215];
                    goto compare;
                  }
                break;
              case 368:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[216];
                    goto compare;
                  }
                break;
              case 373:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[217];
                    goto compare;
                  }
                break;
              case 378:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[218];
                    goto compare;
                  }
                break;
              case 383:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[219];
                    goto compare;
                  }
                break;
              case 388:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[220];
                    goto compare;
                  }
                break;
              case 393:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[221];
                    goto compare;
                  }
                break;
              case 398:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[222];
                    goto compare;
                  }
                break;
              case 403:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[223];
                    goto compare;
                  }
                break;
              case 408:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[224];
                    goto compare;
                  }
                break;
              case 413:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[225];
                    goto compare;
                  }
                break;
              case 418:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[226];
                    goto compare;
                  }
                break;
              case 423:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[227];
                    goto compare;
                  }
                break;
              case 428:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[228];
                    goto compare;
                  }
                break;
              case 433:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[229];
                    goto compare;
                  }
                break;
              case 438:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[230];
                    goto compare;
                  }
                break;
              case 443:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[231];
                    goto compare;
                  }
                break;
              case 448:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[232];
                    goto compare;
                  }
                break;
              case 453:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[233];
                    goto compare;
                  }
                break;
              case 458:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[234];
                    goto compare;
                  }
                break;
              case 463:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[235];
                    goto compare;
                  }
                break;
              case 468:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[236];
                    goto compare;
                  }
                break;
              case 473:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[237];
                    goto compare;
                  }
                break;
              case 478:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[238];
                    goto compare;
                  }
                break;
              case 483:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[239];
                    goto compare;
                  }
                break;
              case 485:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[240];
                    goto compare;
                  }
                break;
              case 487:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[241];
                    goto compare;
                  }
                break;
              case 488:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[242];
                    goto compare;
                  }
                break;
              case 490:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[243];
                    goto compare;
                  }
                break;
              case 492:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[244];
                    goto compare;
                  }
                break;
              case 493:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[245];
                    goto compare;
                  }
                break;
              case 497:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[246];
                    goto compare;
                  }
                break;
              case 498:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[247];
                    goto compare;
                  }
                break;
              case 499:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[248];
                    goto compare;
                  }
                break;
              case 502:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[249];
                    goto compare;
                  }
                break;
              case 503:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[250];
                    goto compare;
                  }
                break;
              case 504:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[251];
                    goto compare;
                  }
                break;
              case 507:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[252];
                    goto compare;
                  }
                break;
              case 508:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[253];
                    goto compare;
                  }
                break;
              case 510:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[254];
                    goto compare;
                  }
                break;
              case 512:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[255];
                    goto compare;
                  }
                break;
              case 513:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[256];
                    goto compare;
                  }
                break;
              case 515:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[257];
                    goto compare;
                  }
                break;
              case 518:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[258];
                    goto compare;
                  }
                break;
              case 519:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[259];
                    goto compare;
                  }
                break;
              case 523:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[260];
                    goto compare;
                  }
                break;
              case 524:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[261];
                    goto compare;
                  }
                break;
              case 526:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[262];
                    goto compare;
                  }
                break;
              case 528:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[263];
                    goto compare;
                  }
                break;
              case 530:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[264];
                    goto compare;
                  }
                break;
              case 531:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[265];
                    goto compare;
                  }
                break;
              case 533:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[266];
                    goto compare;
                  }
                break;
              case 535:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[267];
                    goto compare;
                  }
                break;
              case 538:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[268];
                    goto compare;
                  }
                break;
              case 543:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[269];
                    goto compare;
                  }
                break;
              case 546:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[270];
                    goto compare;
                  }
                break;
              case 547:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[271];
                    goto compare;
                  }
                break;
              case 548:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[272];
                    goto compare;
                  }
                break;
              case 550:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[273];
                    goto compare;
                  }
                break;
              case 551:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[274];
                    goto compare;
                  }
                break;
              case 552:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[275];
                    goto compare;
                  }
                break;
              case 553:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[276];
                    goto compare;
                  }
                break;
              case 555:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[277];
                    goto compare;
                  }
                break;
              case 558:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[278];
                    goto compare;
                  }
                break;
              case 560:
                if (len == 7)
                  {
                    resword = &pinkfish_codes[279];
                    goto compare;
                  }
                break;
              case 565:
                if (len == 8)
                  {
                    resword = &pinkfish_codes[280];
                    goto compare;
                  }
                break;
              case 567:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[281];
                    goto compare;
                  }
                break;
              case 570:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[282];
                    goto compare;
                  }
                break;
              case 572:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[283];
                    goto compare;
                  }
                break;
              case 575:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[284];
                    goto compare;
                  }
                break;
              case 577:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[285];
                    goto compare;
                  }
                break;
              case 578:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[286];
                    goto compare;
                  }
                break;
              case 582:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[287];
                    goto compare;
                  }
                break;
              case 583:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[288];
                    goto compare;
                  }
                break;
              case 588:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[289];
                    goto compare;
                  }
                break;
              case 593:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[290];
                    goto compare;
                  }
                break;
              case 595:
                if (len == 8)
                  {
                    resword = &pinkfish_codes[291];
                    goto compare;
                  }
                break;
              case 597:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[292];
                    goto compare;
                  }
                break;
              case 602:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[293];
                    goto compare;
                  }
                break;
              case 617:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[294];
                    goto compare;
                  }
                break;
              case 618:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[295];
                    goto compare;
                  }
                break;
              case 622:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[296];
                    goto compare;
                  }
                break;
              case 623:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[297];
                    goto compare;
                  }
                break;
              case 628:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[298];
                    goto compare;
                  }
                break;
              case 633:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[299];
                    goto compare;
                  }
                break;
              case 637:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[300];
                    goto compare;
                  }
                break;
              case 642:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[301];
                    goto compare;
                  }
                break;
              case 657:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[302];
                    goto compare;
                  }
                break;
              case 658:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[303];
                    goto compare;
                  }
                break;
              case 662:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[304];
                    goto compare;
                  }
                break;
              case 663:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[305];
                    goto compare;
                  }
                break;
              case 668:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[306];
                    goto compare;
                  }
                break;
              case 673:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[307];
                    goto compare;
                  }
                break;
              case 677:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[308];
                    goto compare;
                  }
                break;
              case 682:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[309];
                    goto compare;
                  }
                break;
              case 697:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[310];
                    goto compare;
                  }
                break;
              case 698:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[311];
                    goto compare;
                  }
                break;
              case 702:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[312];
                    goto compare;
                  }
                break;
              case 703:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[313];
                    goto compare;
                  }
                break;
              case 708:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[314];
                    goto compare;
                  }
                break;
              case 713:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[315];
                    goto compare;
                  }
                break;
              case 714:
                if (len == 7)
                  {
                    resword = &pinkfish_codes[316];
                    goto compare;
                  }
                break;
              case 717:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[317];
                    goto compare;
                  }
                break;
              case 722:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[318];
                    goto compare;
                  }
                break;
              case 728:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[319];
                    goto compare;
                  }
                break;
              case 733:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[320];
                    goto compare;
                  }
                break;
              case 737:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[321];
                    goto compare;
                  }
                break;
              case 738:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[322];
                    goto compare;
                  }
                break;
              case 742:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[323];
                    goto compare;
                  }
                break;
              case 743:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[324];
                    goto compare;
                  }
                break;
              case 748:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[325];
                    goto compare;
                  }
                break;
              case 750:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[326];
                    goto compare;
                  }
                break;
              case 753:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[327];
                    goto compare;
                  }
                break;
              case 755:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[328];
                    goto compare;
                  }
                break;
              case 756:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[329];
                    goto compare;
                  }
                break;
              case 757:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[330];
                    goto compare;
                  }
                break;
              case 758:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[331];
                    goto compare;
                  }
                break;
              case 761:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[332];
                    goto compare;
                  }
                break;
              case 762:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[333];
                    goto compare;
                  }
                break;
              case 763:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[334];
                    goto compare;
                  }
                break;
              case 766:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[335];
                    goto compare;
                  }
                break;
              case 767:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[336];
                    goto compare;
                  }
                break;
              case 768:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[337];
                    goto compare;
                  }
                break;
              case 771:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[338];
                    goto compare;
                  }
                break;
              case 773:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[339];
                    goto compare;
                  }
                break;
              case 776:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[340];
                    goto compare;
                  }
                break;
              case 777:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[341];
                    goto compare;
                  }
                break;
              case 778:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[342];
                    goto compare;
                  }
                break;
              case 779:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[343];
                    goto compare;
                  }
                break;
              case 780:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[344];
                    goto compare;
                  }
                break;
              case 781:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[345];
                    goto compare;
                  }
                break;
              case 782:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[346];
                    goto compare;
                  }
                break;
              case 783:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[347];
                    goto compare;
                  }
                break;
              case 784:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[348];
                    goto compare;
                  }
                break;
              case 785:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[349];
                    goto compare;
                  }
                break;
              case 788:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[350];
                    goto compare;
                  }
                break;
              case 789:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[351];
                    goto compare;
                  }
                break;
              case 790:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[352];
                    goto compare;
                  }
                break;
              case 793:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[353];
                    goto compare;
                  }
                break;
              case 794:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[354];
                    goto compare;
                  }
                break;
              case 795:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[355];
                    goto compare;
                  }
                break;
              case 797:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[356];
                    goto compare;
                  }
                break;
              case 798:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[357];
                    goto compare;
                  }
                break;
              case 799:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[358];
                    goto compare;
                  }
                break;
              case 800:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[359];
                    goto compare;
                  }
                break;
              case 802:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[360];
                    goto compare;
                  }
                break;
              case 803:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[361];
                    goto compare;
                  }
                break;
              case 804:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[362];
                    goto compare;
                  }
                break;
              case 805:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[363];
                    goto compare;
                  }
                break;
              case 807:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[364];
                    goto compare;
                  }
                break;
              case 809:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[365];
                    goto compare;
                  }
                break;
              case 812:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[366];
                    goto compare;
                  }
                break;
              case 814:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[367];
                    goto compare;
                  }
                break;
              case 827:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[368];
                    goto compare;
                  }
                break;
              case 828:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[369];
                    goto compare;
                  }
                break;
              case 829:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[370];
                    goto compare;
                  }
                break;
              case 832:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[371];
                    goto compare;
                  }
                break;
              case 833:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[372];
                    goto compare;
                  }
                break;
              case 834:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[373];
                    goto compare;
                  }
                break;
              case 838:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[374];
                    goto compare;
                  }
                break;
              case 843:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[375];
                    goto compare;
                  }
                break;
              case 847:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[376];
                    goto compare;
                  }
                break;
              case 849:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[377];
                    goto compare;
                  }
                break;
              case 852:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[378];
                    goto compare;
                  }
                break;
              case 854:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[379];
                    goto compare;
                  }
                break;
              case 867:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[380];
                    goto compare;
                  }
                break;
              case 868:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[381];
                    goto compare;
                  }
                break;
              case 872:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[382];
                    goto compare;
                  }
                break;
              case 873:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[383];
                    goto compare;
                  }
                break;
              case 878:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[384];
                    goto compare;
                  }
                break;
              case 883:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[385];
                    goto compare;
                  }
                break;
              case 887:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[386];
                    goto compare;
                  }
                break;
              case 892:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[387];
                    goto compare;
                  }
                break;
              case 907:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[388];
                    goto compare;
                  }
                break;
              case 908:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[389];
                    goto compare;
                  }
                break;
              case 912:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[390];
                    goto compare;
                  }
                break;
              case 913:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[391];
                    goto compare;
                  }
                break;
              case 918:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[392];
                    goto compare;
                  }
                break;
              case 923:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[393];
                    goto compare;
                  }
                break;
              case 927:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[394];
                    goto compare;
                  }
                break;
              case 932:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[395];
                    goto compare;
                  }
                break;
              case 947:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[396];
                    goto compare;
                  }
                break;
              case 948:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[397];
                    goto compare;
                  }
                break;
              case 952:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[398];
                    goto compare;
                  }
                break;
              case 953:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[399];
                    goto compare;
                  }
                break;
              case 958:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[400];
                    goto compare;
                  }
                break;
              case 963:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[401];
                    goto compare;
                  }
                break;
              case 967:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[402];
                    goto compare;
                  }
                break;
              case 968:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[403];
                    goto compare;
                  }
                break;
              case 972:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[404];
                    goto compare;
                  }
                break;
              case 973:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[405];
                    goto compare;
                  }
                break;
              case 978:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[406];
                    goto compare;
                  }
                break;
              case 983:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[407];
                    goto compare;
                  }
                break;
              case 987:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[408];
                    goto compare;
                  }
                break;
              case 988:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[409];
                    goto compare;
                  }
                break;
              case 992:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[410];
                    goto compare;
                  }
                break;
              case 993:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[411];
                    goto compare;
                  }
                break;
              case 998:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[412];
                    goto compare;
                  }
                break;
              case 1003:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[413];
                    goto compare;
                  }
                break;
              case 1007:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[414];
                    goto compare;
                  }
                break;
              case 1008:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[415];
                    goto compare;
                  }
                break;
              case 1009:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[416];
                    goto compare;
                  }
                break;
              case 1012:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[417];
                    goto compare;
                  }
                break;
              case 1013:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[418];
                    goto compare;
                  }
                break;
              case 1014:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[419];
                    goto compare;
                  }
                break;
              case 1016:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[420];
                    goto compare;
                  }
                break;
              case 1019:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[421];
                    goto compare;
                  }
                break;
              case 1021:
                if (len == 4)
                  {
                    resword = &pinkfish_codes[422];
                    goto compare;
                  }
                break;
              case 1022:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[423];
                    goto compare;
                  }
                break;
              case 1024:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[424];
                    goto compare;
                  }
                break;
              case 1027:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[425];
                    goto compare;
                  }
                break;
              case 1028:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[426];
                    goto compare;
                  }
                break;
              case 1029:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[427];
                    goto compare;
                  }
                break;
              case 1032:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[428];
                    goto compare;
                  }
                break;
              case 1033:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[429];
                    goto compare;
                  }
                break;
              case 1034:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[430];
                    goto compare;
                  }
                break;
              case 1037:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[431];
                    goto compare;
                  }
                break;
              case 1038:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[432];
                    goto compare;
                  }
                break;
              case 1039:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[433];
                    goto compare;
                  }
                break;
              case 1040:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[434];
                    goto compare;
                  }
                break;
              case 1042:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[435];
                    goto compare;
                  }
                break;
              case 1043:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[436];
                    goto compare;
                  }
                break;
              case 1044:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[437];
                    goto compare;
                  }
                break;
              case 1045:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[438];
                    goto compare;
                  }
                break;
              case 1047:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[439];
                    goto compare;
                  }
                break;
              case 1048:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[440];
                    goto compare;
                  }
                break;
              case 1053:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[441];
                    goto compare;
                  }
                break;
              case 1058:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[442];
                    goto compare;
                  }
                break;
              case 1059:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[443];
                    goto compare;
                  }
                break;
              case 1063:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[444];
                    goto compare;
                  }
                break;
              case 1064:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[445];
                    goto compare;
                  }
                break;
              case 1067:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[446];
                    goto compare;
                  }
                break;
              case 1068:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[447];
                    goto compare;
                  }
                break;
              case 1072:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[448];
                    goto compare;
                  }
                break;
              case 1073:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[449];
                    goto compare;
                  }
                break;
              case 1078:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[450];
                    goto compare;
                  }
                break;
              case 1079:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[451];
                    goto compare;
                  }
                break;
              case 1080:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[452];
                    goto compare;
                  }
                break;
              case 1083:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[453];
                    goto compare;
                  }
                break;
              case 1084:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[454];
                    goto compare;
                  }
                break;
              case 1085:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[455];
                    goto compare;
                  }
                break;
              case 1088:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[456];
                    goto compare;
                  }
                break;
              case 1093:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[457];
                    goto compare;
                  }
                break;
              case 1098:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[458];
                    goto compare;
                  }
                break;
              case 1103:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[459];
                    goto compare;
                  }
                break;
              case 1107:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[460];
                    goto compare;
                  }
                break;
              case 1108:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[461];
                    goto compare;
                  }
                break;
              case 1112:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[462];
                    goto compare;
                  }
                break;
              case 1113:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[463];
                    goto compare;
                  }
                break;
              case 1118:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[464];
                    goto compare;
                  }
                break;
              case 1123:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[465];
                    goto compare;
                  }
                break;
              case 1128:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[466];
                    goto compare;
                  }
                break;
              case 1133:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[467];
                    goto compare;
                  }
                break;
              case 1138:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[468];
                    goto compare;
                  }
                break;
              case 1143:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[469];
                    goto compare;
                  }
                break;
              case 1147:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[470];
                    goto compare;
                  }
                break;
              case 1148:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[471];
                    goto compare;
                  }
                break;
              case 1152:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[472];
                    goto compare;
                  }
                break;
              case 1153:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[473];
                    goto compare;
                  }
                break;
              case 1158:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[474];
                    goto compare;
                  }
                break;
              case 1163:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[475];
                    goto compare;
                  }
                break;
              case 1168:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[476];
                    goto compare;
                  }
                break;
              case 1173:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[477];
                    goto compare;
                  }
                break;
              case 1178:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[478];
                    goto compare;
                  }
                break;
              case 1183:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[479];
                    goto compare;
                  }
                break;
              case 1187:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[480];
                    goto compare;
                  }
                break;
              case 1188:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[481];
                    goto compare;
                  }
                break;
              case 1192:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[482];
                    goto compare;
                  }
                break;
              case 1193:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[483];
                    goto compare;
                  }
                break;
              case 1198:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[484];
                    goto compare;
                  }
                break;
              case 1203:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[485];
                    goto compare;
                  }
                break;
              case 1208:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[486];
                    goto compare;
                  }
                break;
              case 1213:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[487];
                    goto compare;
                  }
                break;
              case 1218:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[488];
                    goto compare;
                  }
                break;
              case 1223:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[489];
                    goto compare;
                  }
                break;
              case 1227:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[490];
                    goto compare;
                  }
                break;
              case 1228:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[491];
                    goto compare;
                  }
                break;
              case 1232:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[492];
                    goto compare;
                  }
                break;
              case 1233:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[493];
                    goto compare;
                  }
                break;
              case 1237:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[494];
                    goto compare;
                  }
                break;
              case 1242:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[495];
                    goto compare;
                  }
                break;
              case 1249:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[496];
                    goto compare;
                  }
                break;
              case 1250:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[497];
                    goto compare;
                  }
                break;
              case 1254:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[498];
                    goto compare;
                  }
                break;
              case 1255:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[499];
                    goto compare;
                  }
                break;
              case 1257:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[500];
                    goto compare;
                  }
                break;
              case 1258:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[501];
                    goto compare;
                  }
                break;
              case 1262:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[502];
                    goto compare;
                  }
                break;
              case 1263:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[503];
                    goto compare;
                  }
                break;
              case 1268:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[504];
                    goto compare;
                  }
                break;
              case 1270:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[505];
                    goto compare;
                  }
                break;
              case 1273:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[506];
                    goto compare;
                  }
                break;
              case 1275:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[507];
                    goto compare;
                  }
                break;
              case 1279:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[508];
                    goto compare;
                  }
                break;
              case 1284:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[509];
                    goto compare;
                  }
                break;
              case 1288:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[510];
                    goto compare;
                  }
                break;
              case 1290:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[511];
                    goto compare;
                  }
                break;
              case 1293:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[512];
                    goto compare;
                  }
                break;
              case 1295:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[513];
                    goto compare;
                  }
                break;
              case 1308:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[514];
                    goto compare;
                  }
                break;
              case 1310:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[515];
                    goto compare;
                  }
                break;
              case 1313:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[516];
                    goto compare;
                  }
                break;
              case 1315:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[517];
                    goto compare;
                  }
                break;
              case 1319:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[518];
                    goto compare;
                  }
                break;
              case 1324:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[519];
                    goto compare;
                  }
                break;
              case 1468:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[520];
                    goto compare;
                  }
                break;
              case 1473:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[521];
                    goto compare;
                  }
                break;
              case 1478:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[522];
                    goto compare;
                  }
                break;
              case 1483:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[523];
                    goto compare;
                  }
                break;
              case 1488:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[524];
                    goto compare;
                  }
                break;
              case 1493:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[525];
                    goto compare;
                  }
                break;
              case 1497:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[526];
                    goto compare;
                  }
                break;
              case 1502:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[527];
                    goto compare;
                  }
                break;
              case 1518:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[528];
                    goto compare;
                  }
                break;
              case 1523:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[529];
                    goto compare;
                  }
                break;
              case 1538:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[530];
                    goto compare;
                  }
                break;
              case 1539:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[531];
                    goto compare;
                  }
                break;
              case 1543:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[532];
                    goto compare;
                  }
                break;
              case 1544:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[533];
                    goto compare;
                  }
                break;
              case 1608:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[534];
                    goto compare;
                  }
                break;
              case 1749:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[535];
                    goto compare;
                  }
                break;
              case 1754:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[536];
                    goto compare;
                  }
                break;
              case 1769:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[537];
                    goto compare;
                  }
                break;
              case 1774:
                if (len == 6)
                  {
                    resword = &pinkfish_codes[538];
                    goto compare;
                  }
                break;
              case 1778:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[539];
                    goto compare;
                  }
                break;
              case 1783:
                if (len == 5)
                  {
                    resword = &pinkfish_codes[540];
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return resword;
          }
        }
    }
  return 0;
}
