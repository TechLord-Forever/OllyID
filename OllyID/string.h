#include <stdio.h>

#ifndef _OLLYID_HELPER_H_
#define _OLLYID_HELPER_H_

extern void unicode_remove_char(wchar_t *s, wchar_t c);
extern void remove_char(char *s, char c);
extern int get_line(FILE *fp, char *buffer, size_t buflen);
extern char* rstrip(char* s);
extern char* lskip(const char* s);
extern char* find_char_or_comment(const char* s, char c);

#endif /* _OLLYID_HELPER_H_ */