#include "main.h"

/**
 * print_triangle - Function that prints a triangle.
 *                  folowed by a new line.
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			if (column <= (size - row))
				_putchar(32);
			else
				_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
