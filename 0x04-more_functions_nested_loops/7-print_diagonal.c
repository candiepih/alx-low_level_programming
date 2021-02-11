#include "holberton.h"

/**
 * print_diagonal - print \ character @n times
 * @n: character counter to print
 */

void print_diagonal(int n)
{
	int j, i;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
