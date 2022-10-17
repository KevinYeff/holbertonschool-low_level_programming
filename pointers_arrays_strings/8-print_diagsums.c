#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a:              Square matrix of ints.
 * @size:           Size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int principal = 0, secondary = 0;

	for (i = 0; i < size; i++)
	{
		principal = principal + a[i + (i * size)];
		secondary = secondary + a[(i * size) + (size - i - 1)];
	}
	printf("%d, %d\n", principal, secondary);
}
