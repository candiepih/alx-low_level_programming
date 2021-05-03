#include "holberton.h"

/**
 * _strcpy - copies string pointed to @src
 * @dest: destination to copy string
 * @src: the string to copy to destination
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
