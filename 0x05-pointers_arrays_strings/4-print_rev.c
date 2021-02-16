#include "holberton.h"

/**
 * print_rev - printing string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
