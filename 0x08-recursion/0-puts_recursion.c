#include "holberton.h"

/**
 * _puts_recursion - prints string
 * @s: pointer to the string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
