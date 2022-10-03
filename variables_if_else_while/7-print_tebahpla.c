#include <stdio.h>
/**
 * main - Prints the lowercase laphabet in reverse,
 *        followed by a new line.
 *
 * Return: (0).
 */
int main(void)
{
	char alphalow;

	alphalow = 'z';

	while (alphalow >= 'a')
	{
		putchar(alphalow);
		alphalow--;
	}
	putchar('\n');
	return (0);
}
