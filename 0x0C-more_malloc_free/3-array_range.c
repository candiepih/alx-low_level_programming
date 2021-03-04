#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest range
 * @max: highest range
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (0);

	p = malloc(sizeof(*p) * ((max - min) + 1));
	if (!p)
		return (0);

	for (i = min; i <= max; i++)
		p[i] = i;

	return (p);
}
