#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: Number of times the characer "_" should be printed.
 *               The line should end with a "\n".
 *               If n is 0 or less, the function should only print "\n".
 */

void print_line(int n)
{
	int pline;

	for (pline = 0; pline < n; pline++)
		_putchar(95);
	_putchar(10);
}
