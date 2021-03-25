#include "holberton.h"

/**
 * _strlen - get string length
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0's and 1's characters
 * Return: converted number or (0) if @b contains characters
 * that are not 0 or 1 or if @b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int base = 1;
	int length;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	length = _strlen((char *)b);

	while (length--)
	{
		if (b[length] == '1')
			sum += base;
		else if ((b[length] > '1') || (b[length] < '0'))
			return (0);
		base *= 2;
	}

	return (sum);
}
