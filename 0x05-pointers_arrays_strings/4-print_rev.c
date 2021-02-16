#include "holberton.h"

/**
 * print_rev - printing string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
