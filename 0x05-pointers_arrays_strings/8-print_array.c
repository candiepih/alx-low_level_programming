#include <stdio.h>
#include "holberton.h"

/**
 * print_array - printing full array depending on size
 * @a: array pointed to
 * @n: size limit of values to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i, lastIndex = (n - 1);

	for (i = 0; i < n; i++)
	{
		if (i != lastIndex)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
