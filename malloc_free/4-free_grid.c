#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 *             our alloc_grid function.
 * @grid:      The address of the two dimensional grid.
 * @height:    Height of the grid.
 */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);
	free(grid);
}
