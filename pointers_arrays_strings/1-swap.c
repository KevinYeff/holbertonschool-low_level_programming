#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 *
 * @a: First pointer.
 * @b: Second pointer.
 */

void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
