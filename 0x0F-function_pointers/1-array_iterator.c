#include <stdlib.h>

/**
 * array_iterator - iterates and calls a callback function for each
 * of the array element
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < (int)size; i++)
			action(array[i]);
	}
}
