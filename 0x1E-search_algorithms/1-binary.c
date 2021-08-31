#include "search_algos.h"

/**
 * print_array - prints the elements of the array
 * @array: the array to print it's contents
 * @size: the number of elements in the array
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != (size - 1))
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: value to search for in @array
 * Return: first index where @value is located, (-1) if @array is NULL or
 * @value is not found in @array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t center;

	if (!array || size == 0)
		return (-1);

	center = (size - 1) / 2;
	printf("Searching in array: ");
	print_array(array, size);
	if (array[center] == value)
	{
		return ((int)(size + center));
	}
	else if (value < array[center])
	{
		return (binary_search(array, center, value));
	}
	return (binary_search((array + (center + 1)), size - (center + 1), value));
}
