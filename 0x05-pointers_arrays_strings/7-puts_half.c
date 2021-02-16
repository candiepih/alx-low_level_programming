#include "holberton.h"

/**
 * puts_half - prints half the string
 * @str: string provided
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0, i, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	half = length / 2;

	if (length % 2 != 0)
		half += 1;

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
