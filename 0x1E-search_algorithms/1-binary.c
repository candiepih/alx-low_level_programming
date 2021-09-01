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
		else
			printf("\n");
	}
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
	int left, right, center, i;

	if (!array)
		return (-1);

	left = 0;
	right = (size - 1);
	while (left <= right)
	{
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != (right))
				printf(", ");
			else
				printf("\n");
		}
		center = (left + right) / 2;
		if (array[center] == value)
			return center;
		else if (value < array[center])
			right = center - 1;
		else if (value > array[center])
			left  = center + 1;
	}
	return (-1);
}
