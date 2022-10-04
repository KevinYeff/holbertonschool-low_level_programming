#include "main.h"

/**
 * times_table - Prints the 9 times table,
 *               starting with 0.
 */
void times_table(void)
{
	int factor1, factor2, product;

	factor1 = 0;
	while (factor1 <= 9)
	{
		factor2 = 0;
		while (factor2 <= 9)
		{
			product = factor1 * factor2;
			if (factor2 == 0)
			{
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(product + '0');
			}
			factor2++;
		}
		factor1++;
		_putchar(10);
	}
}
