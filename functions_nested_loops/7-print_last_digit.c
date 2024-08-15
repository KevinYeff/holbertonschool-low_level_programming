#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @h: Will be the int to be tested.
 *
 * Return: Will be the last digit of the given number.
 */

int print_last_digit(int h)
{
	int mod;

	mod = h % 10;
	if (mod < 0)
		mod *= -1;

	_putchar(48 + mod);
	return (mod);
}
