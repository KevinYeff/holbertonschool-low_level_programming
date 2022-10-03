#include <stdio.h>
/**
 * main - Prints the alphabet in lowercae , and uppercase.
 *
 * Return: (0).
 */

int main(void)
{
	char alphalow, alphaupp;

	alphalow = 'a';
	alphaupp = 'A';

	while (alphalow <= 'z')
	{
		putchar(alphalow);
		alphalow++;
	}
	while (alphaupp <= 'Z')
	{
		putchar(alphaupp);
		alphaupp++;
	}
	putchar('\n');
	return (0);
}
