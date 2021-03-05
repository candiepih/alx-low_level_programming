#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
int _str_length(char *s);
void _str_concat(char *s1, char *s2);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(char *s);
int isNumber(char *s);
void print(char *s);
char *tostring(int num);

#endif
