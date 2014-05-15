/*
 * str.h
 * Copyright (C) 2014 c9s <c9s@c9smba.local>
 *
 * Distributed under terms of the MIT license.
 */
#ifndef STR_H
#define STR_H


int strndiff(char * d1, char * d2, unsigned int n);

int strdiff(char * d1, char * d2);

char * slug_to_pcre(char * slug, char sep);

char * ltrim_slash(char* str);

char** str_split(char* a_str, const char a_delim);

void str_repeat(char *s, char *c, int len);

void print_indent(int level);


#endif /* !STR_H */
