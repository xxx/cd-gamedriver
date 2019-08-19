/*
 * utf8.h
 *
 * Helpers for UTF-8 string handling
 */
#ifndef UTF8_H_
#define UTF8_H_

#include <glib.h>

#define UTF8_LENGTH(Char)              \
  ((Char) < 0x80 ? 1 :                 \
   ((Char) < 0x800 ? 2 :               \
    ((Char) < 0x10000 ? 3 :            \
     ((Char) < 0x200000 ? 4 :          \
      ((Char) < 0x4000000 ? 5 : 6)))))

#endif