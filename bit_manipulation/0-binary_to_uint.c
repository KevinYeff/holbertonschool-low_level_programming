#include "main.h"

/**
 * binary_to_uint - Function that converts abinary number to an unsigned int.
 * @b:              Pointer to string.
 * Return:          The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (*b == NULL)
		return (0);

	i = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
		i++;
	}
	b -= i;

	i = 0;
	while (*b != '\0')
	{
		if (*b == '1')
			dec = (dec << 1) | 1;
		else if (*b == '0')
			dec <<= 1;
		b++;
		i++;
	}
	b -= i;
	return (dec);
}
