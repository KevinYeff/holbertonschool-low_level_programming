#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array of
 *              integers.
 * @width:      Columns of the matrix.
 * @height:     Rows of the matrix.
 * Return:      Returns a pointer to a 2 dimensional array of integers.
 *              NULL on failure.
 *              If width or height is 0 or negative, return NULL.
 */

int **alloc_grid(int width, int height)
{
	int **matrix, row, rix;/*row index*/

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * width);

	if (!matrix)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		matrix[row] = malloc(sizeof(int) * width);

		for (rix = 0; rix < width; rix++)
			matrix[row][rix] = 0;
	}
	return (matrix);
}
