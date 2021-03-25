#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print it's converted representation
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, temp = n, length = 0;

	if (n == 0)
		_putchar(0 + '0');

	while (temp)
	{
		length++;
		temp >>= 1;
	}

	for (i = 0; i < length; i++)
		_putchar(((n >> i) & 0x1) + '0');
}
