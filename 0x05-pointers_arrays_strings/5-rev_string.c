#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string being reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp;
	int length = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
