#include "main.h"

/**
 * jack_bauer - Prints every minute of the day starting from
 *              00:00 to 23:59.
 * Return: Should be 0.
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(58);
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(10);
			m++;
		}
		h++;
	}
}
