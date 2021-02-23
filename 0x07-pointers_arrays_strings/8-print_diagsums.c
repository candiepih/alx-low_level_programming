#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals in a square
 * matrix of an integer
 * @a: pointer to the array of the integers
 * @size: size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0 ; i < (size * size); i = i + (size + 1))
	{
		sum1 += a[i];
	}
	for (j = size - 1 ; j < (size * size) - (size - 1) ; j = j + (size - 1))
	{
		sum2 += a[j];
	}

	printf("%d, %d\n", sum1, sum2);
}
