#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lower
 *                      case followed by a new line.
 *
 * Return: void.
 *
 * Consideration: alc -> alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int i;
	char alc;

	for (i = 0; i <= 9; i++)
	{
		for (alc = 97; alc <= 122; alc++)
			_putchar(alc);
		_putchar(10);
	}
}
