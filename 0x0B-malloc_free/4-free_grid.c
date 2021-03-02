#include <stdlib.h>

/**
 * free_grid - frees allocated memory of a 2d array
 * @grid: the 2d array
 * @height: number of arrays in @grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
