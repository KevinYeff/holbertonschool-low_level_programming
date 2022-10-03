#include <stdio.h>
/**
 * main - Prints the alphabet in lower case.
 *
 * Return: (0).
 */

int main(void)
{
	char alphalow;

	alphalow = 'a';

	while (alphalow <= 'z')
	{
		putchar(alphalow);
		alphalow++;
	}
	putchar('\n');
	return (0);
}
