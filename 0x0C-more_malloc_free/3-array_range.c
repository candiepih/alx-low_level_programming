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

	range = (max - min);

	p = malloc(sizeof(*p) * (range + 1));
	if (!p)
		return (0);

	for (i = 0; i <= max; i++)
		p[i] = (i + min);

	return (p);
}
