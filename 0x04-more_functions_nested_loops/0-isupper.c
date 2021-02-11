#include "holberton.h"

/**
 * _isupper - check for uppercase characters
 * @c: value to check
 * Return: 1 (if @c is uppercase) 0 (if @c is lowercase)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
