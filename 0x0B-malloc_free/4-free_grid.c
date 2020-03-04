#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to a 2 dimensional array
 * previously created by the alloc_grid function
 *
 * @grid: pointer to 2 dimensional array created by alloc_grid
 *
 * @height: amount of arrays arrayed to grid**, also amount of
 * values printed in each column
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
