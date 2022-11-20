#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n:         Pointer to a number.
 * @index:     Bit to clear (index).
 * Return:     1 if worked, 0 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	index = ~(1UL << index);
	*n &= index;
	return (1);
}
