#include "holberton.h"

/**
 * puts2 - ptint every other character of string
 * starting with the first
 *
 *@str: string to print
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
