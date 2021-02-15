#include "holberton.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 * Returnn: nothing
 */

void swap_int(int *a, int *b)
{
	int newB = *a;
	*a = *b;
	*b = newB;
}
