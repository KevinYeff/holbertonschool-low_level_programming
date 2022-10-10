#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: First int variable.
 * @b: Second int variable.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
