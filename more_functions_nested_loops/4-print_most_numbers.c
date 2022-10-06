#include "main.h"
/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9, followed
 *                      by a new line.
 */
void print_most_numbers(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		if (numbers != 50 && numbers != 52)
		{
			_putchar(numbers);
		}
		numbers++;
	}
	_putchar(10);
}
