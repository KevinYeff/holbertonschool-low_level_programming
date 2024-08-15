#include "main.h"

/**
 * _print_time - prints the format to match the output.
 * @h: Variable corresponding to hours.
 * @m: Variable corresponding to minutes.
 *
 * Return: void.
 *
 * Consideration: Use only _putchar() function.
 */

void _print_time(int h, int m)
{
	_putchar((h / 10) + 48);
	_putchar((h % 10) + 48);
	_putchar(58);
	_putchar((m / 10) + 48);
	_putchar((m % 10) + 48);
	_putchar(10);
}

/**
 * jack_bauer - Prints every minute of the day starting from
 *              00:00 to 23:59.
 *
 * Return: Should be 0.
 *
 * Consideration: Consider to extract the print logic separetly.
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
			_print_time(h, m);
	}
}
