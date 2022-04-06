#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid created by all_grid
 * @grid: grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
