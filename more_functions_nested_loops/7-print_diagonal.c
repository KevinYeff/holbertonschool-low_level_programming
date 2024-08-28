#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the
 *                  terminal.
 * @n: The number of times the character "\" should be printed.
 */

void print_diagonal(int n)
{
	int spaces, bslash;

	for (bslash = 0; bslash < n; bslash++)
	{
		for (spaces = 0; spaces < bslash; spaces++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
