#include "holberton.h"

/**
 * print_last_digit - print last digit of @num
 * @num: integer to determine last digit
 * Return: 0 (Success)
 */
int print_last_digit(int num)
{
	int last = (num % 10);

	last = num < 0 ? (-last) : last;
	_putchar('0' + last);

	return (last);
}
