#include "holberton.h"
/**
 * _islower
 * @c: character to determine lowercase
 * Description: Determine for lowercase
 * Return 1 (if c is lowercase) 0 otherwise
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
