#ifndef HOLBERTON_H
#define HOLBERTON_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
int _isUpper(char st);
int _isAlpha(char st);
char *cap_string(char *);
void _capitalize(char *st, int index);
char *leet(char *);
char *rot13(char *);
void _cat(char *s, int index, char category, char altCategory);

#endif
