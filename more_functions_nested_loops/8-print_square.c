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

	line = 0;
	while (line < size)
	{
		fill = 0;
		while (fill < size)
		{
			_putchar(35);
			fill++;
		}
		_putchar(10);
		line++;
	}
	if (size <= 0)
		_putchar(10);
}
