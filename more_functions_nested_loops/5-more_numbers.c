#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers,
 *                from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column >= 10)
				_putchar(48 + (column / 10));

			_putchar(48 + (column % 10));
		}
		_putchar(10);
	}
}
