#include <stdio.h>
/**
 * main - Prints the lowercase laphabet in reverse,
 *        followed by a new line.
 *
 * Return: (0).
 */
int main(void)
{
	/* Declares char variable */
	char alphalow = 'z';
	/* Defines loop */
	for (; alphalow >= 'a'; alphalow--)
		/*Prints current value*/
		putchar(alphalow);
	/* Pritns new line */
	putchar('\n');
	/* Ends */
	return (0);
}
