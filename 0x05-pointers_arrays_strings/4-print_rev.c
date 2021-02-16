#include "holberton.h"

/**
 * print_rev - printing string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	length -= 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
