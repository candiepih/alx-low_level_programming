#include <stdlib.h>

/**
 * alloc_grid - creates a two dimension array and initializes
 * them with a zero
 * @width: size of the arrays in the main array
 * @height: size of the main array
 * Return: pointer to the main array created
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
