#include <stdio.h>
#include "holberton.h"

/**
 * print_array - printing full array depending on
 * size provided
 * @a: array pointed to
 * @n: size limit of values to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
