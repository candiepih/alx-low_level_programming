#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print it's converted representation
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
