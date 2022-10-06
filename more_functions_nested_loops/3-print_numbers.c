#include "main.h"
/**
 * print_numbers - Function that prints the numbers, from 0 to 9, followed by a
 *                  new line.
 */
void print_numbers(void)
{
	int number = 48;

	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar(10);
}
