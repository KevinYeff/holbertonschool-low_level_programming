#include "main.h"

/**
 * prints_format - Function that recieves 2 integers.
 * @factor2: Integer used to match the output when multiplying by 0.
 * @product: Integer used to match the rest of the output.
 *
 * Return: void.
 */

void prints_format(int factor2, int product)
{
	if (factor2 == 0)
	{
		_putchar(48 + product);
	}
	else if (product <= 9)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(48 + product);
	}
	else
	{
		_putchar(44);
		_putchar(32);
		_putchar(48 + (product / 10));
		_putchar(48 + (product % 10));
	}
}

/**
 * times_table - Prints the 9 times table,
 *               starting with 0.
 *
 * Return: void.
 *
 * Considerations: Examine the output.
 */

void times_table(void)
{
	int factor1, factor2, product;

	for (factor1 = 0; factor1 <= 9; factor1++)
	{
		for (factor2 = 0; factor2 <= 9; factor2++)
		{
			product = factor1 * factor2;
			prints_format(factor2, product);
		}
		_putchar(10);
	}
}
