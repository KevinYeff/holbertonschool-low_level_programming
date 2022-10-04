#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @h: Will be the int to be tested.
 * Return: Will be the last digit.
 */
int print_last_digit(int h)
{
	int modulus;

	modulus = h % 10;
	if (modulus < 0)
	{
		modulus *= -1;
	}
	_putchar(modulus + '0');
	return (modulus);
}
