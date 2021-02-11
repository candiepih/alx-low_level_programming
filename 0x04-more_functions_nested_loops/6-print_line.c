#include "holberton.h"

/**
 * print_line - printing line @n times
 * @n: printing counter for lines
 */

void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
