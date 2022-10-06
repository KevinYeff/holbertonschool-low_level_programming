#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line on the
 *                  terminal.
 * @n: The number of times the character "\" should be printed.
 */
void print_diagonal(int n)
{
	int spaces, bslash;

	bslash = 0;
	while (bslash < n)
	{
		spaces = 0;
		while (spaces < bslash)
		{
			_putchar(32);
			spaces++;
		}
		_putchar(92);
		_putchar(10);
		bslash++;
	}
	if (n <= 0)
	_putchar(10);
}
