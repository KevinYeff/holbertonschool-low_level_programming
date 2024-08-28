#include "main.h"

/**
 * print_square - Function that prints a square, followed by a
 *                new line.
 * @size: Size of the square.
 *                Use "#" to print the square.
 */

void print_square(int size)
{
	int line, fill;

	for (line = 0; line < size; line++)
	{
		for (fill = 0; fill < size; fill++)
			_putchar(35);
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
