#include "holberton.h"

/**
 * _abs
 * #num: integer
 * Description: determine absolute value of @num
 * Return: absolute value of @num
 */
int _abs(int num)
{
	return ((num < 0) ? (-num) : (num));
}
