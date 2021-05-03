#include "holberton.h"

/**
 * _strncat - concatenates strings but printing most of @n
 * bytes from @src buto src does not need to be null terminated
 * if it contains @n bytes or more
 *
 * @dest: destination string
 * @src: string to cocatenate to @dest
 * @n: number of bytes
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		length++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

	return (dest);
}
