#include "main.h"
/**
 * print_sign - Function that prints the sing of a number.
 * @n: Number to be tested.
 * Return: (1) and prints + if n is greater than zero.
 *         (0) and prints 0 if n is zero.
 *         (-1) and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(61);
		return (48);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
