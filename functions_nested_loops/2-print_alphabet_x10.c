#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lower
 *                      case followed by a new line.
 */
void print_alphabet_x10(void)
{
	int iterator = 1;
	char alphalow;

	while (iterator <= 10)
	{
		alphalow = 97;
		while (alphalow <= 122)
		{
			_putchar(alphalow);
			alphalow++;
		}
		_putchar(10);
		iterator++;
	}
}
