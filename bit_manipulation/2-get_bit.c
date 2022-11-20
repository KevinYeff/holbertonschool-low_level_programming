#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n:       The bit.
 * @index:   The index to get the value.
 * Return:   Value of a bit at index or -1 if an error occur.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= n)
		return (-1);
	n >>= index;
	return (n & 1);
}
