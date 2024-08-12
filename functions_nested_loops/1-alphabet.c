#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lower case (alc)
 *                  followed by a new line.
 *
 * Return: void.
 *
 * Consideration: Use your own _putchar() function
 */

void print_alphabet(void)
{
	char alc;

	for (alc = 97; alc <= 122; alc++)
		_putchar(alc);

	_putchar(10);
}
