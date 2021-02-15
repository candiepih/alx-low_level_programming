#include "holberton.h"

/**
 * _strlen - get string length
 * @s: string
 */

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
