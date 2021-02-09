#include "holberton.h"

/**
 * _isalpha
 * @c - character to be determined for alphabet
 * Description: checking for alphabet characters
 * Return: 1 if is a letter and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
