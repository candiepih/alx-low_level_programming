#include "holberton.h"

/**
 * print_triangle - drawing triangle depending on size
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int spaces, i, s, j;

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		for (s = 0; s < spaces; s++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
