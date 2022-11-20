#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1.
 * @n:       Pointer to a number.
 * @index:   Index of the bit to be seted to 1.
 * Return:   1 if works, 0 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	index = 1UL << index;
	*n |= index;
	return (1);
}
