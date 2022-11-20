#include "main.h"
/**
 * flip_bits - Function tht returns the number of bits you would need
 *             to flip to get from one number to another.
 * @n:         A given number.
 * @m:         A given number.
 * Return:     Count of bits fliped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, cFlip = 0;

	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			cFlip++;
		xor >>= 1;
	}
	return (cFlip);
}
