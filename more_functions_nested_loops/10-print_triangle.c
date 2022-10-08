#include "main.h"
/**
 * print_triangle - Function that prints a triangle.
 *                  folowed by a new line.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
	int row, column;

	row = 1;
	while(row <= size)
	{
		column = 1;
		while(column <= size)
		{
			if (column <= (size - row))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
			column++;
		}
		_putchar(10);
		row++;
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
