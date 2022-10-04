#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *
 * Return: (0).
 */
int main(void)
{
	int numbersz;
	char alphalow;

	numbersz = '0';

	while (numbersz <= '9')
	{
		putchar(numbersz);
		numbersz++;
	}

	alphalow = 'a';

	while (alphalow <= 'f')
	{
		putchar(alphalow);
		alphalow++;
	}
	putchar('\n');
	return (0);
}
