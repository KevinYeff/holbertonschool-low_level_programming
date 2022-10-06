#include "main.h"
/**
 * more_numbers - Dunction that prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 */
void more_numbers(void)
{
	int row, column;

	row = 0;
	while (row <= 9)
	{
		column = 0;
		while (column <= 14)
		{
			if (column >= 10)
			{
				_putchar(column / 10 + '0');
			}
			_putchar(column % 10 + '0');
			column++;
		}
		_putchar(10);
		row++;
	}
}
