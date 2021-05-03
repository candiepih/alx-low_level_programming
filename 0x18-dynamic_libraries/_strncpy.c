#include "holberton.h"

/**
 * _strncpy - copies @src string to @dest including the terminating
 * null byte ensuring that most @n bytes of src are copied to @dest.
 * if theres no null byte among @n bytes the string placed in @dest
 * will not be null terminated
 *
 * @dest: destination of the string
 * @src: the string to copy to destination
 * @n: number of bytes of @src
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
		for ( ; i < n; i++)
			dest[i] = '\0';
	return (dest);
}
