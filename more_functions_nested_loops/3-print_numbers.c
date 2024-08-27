#include "main.h"

/**
 * print_numbers - Function that prints the numbers, from 0 to 9, followed by a
 *                  new line.
 */

void print_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
		_putchar(number);
	_putchar(10);
}
