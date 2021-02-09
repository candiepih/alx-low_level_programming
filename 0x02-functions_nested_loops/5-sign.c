#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: value to be determined
 *
 * Return: return 1 if n is
 * greater than zero, return 0 if n
 * is zero and return -1 if n is
 * less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

