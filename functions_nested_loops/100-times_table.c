#include "main.h"

/**
 * print_table - Auxiliar function that prints the n times table
 * @product: Integer used to match the output
 */

void print_table(int product)
{
	if (product >= 100 && product <= 999)
	{
		_putchar((product / 100) + 48);
		_putchar(((product / 10) % 10) + 48);
		_putchar((product % 10) + 48);
	}
	else if (product >= 10 && product <= 99)
	{
		_putchar(32);
		_putchar((product / 10) + 48);
		_putchar((product % 10) + 48);
	}
	else
	{
		_putchar(32);
		_putchar(32);
		_putchar(product + 48);
	}
}
/**
 * print_times_table - Prints n times table, starting with 0.
 *                     if  n is greater than 15 or less than 0
 *                     the function should not print anything.
 * @n: Number of times table.
 * Return: void.
 */

void print_times_table(int n)
{
	int factor1, factor2, product;

	if (n <= 15 && n >= 0)
	{
		factor1 = 0;
		while (factor1 <= n)
		{
			_putchar(48);
			factor2 = 1;
			while (factor2 <= n)
			{
				product = factor1 * factor2;
				_putchar(44);
				_putchar(32);
				print_table(product);
				factor2++;
			}
			factor1++;
			_putchar(10);
		}
	}
}
