#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9, followed
 *                      by a new line.
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		if (!(numbers == 50 || numbers == 52))
			_putchar(numbers);
	}
	_putchar(10);
}
