#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void write_buffer(char *s);
void handle_buffer_cp(int *fd1, int *fd2);
void handle_cp_command(int *fd, char *file2);
int _putchar(char c);

#endif
