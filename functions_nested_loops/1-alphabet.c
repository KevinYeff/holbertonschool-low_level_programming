#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lower case
 *        followed by a new line.
 */

void print_alphabet(void)
{
	char alphalow;

	alphalow = 97;
	while (alphalow <= 122)
	{
		_putchar(alphalow);
		alphalow++;
	}
	_putchar(10);
}
