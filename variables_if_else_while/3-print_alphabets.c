#include <stdio.h>
/**
 * main - Prints the alphabet in lowercae , and uppercase.
 *        We can use ASCII values too.
 *
 * Return: (0).
 */

int main(void)
{
	/* Declares variables */
	char alphalow, alphaupp;
	/* Sets values to the variables */
	alphalow = 'a';
	alphaupp = 'A';
	/* loops based on conditions */
	for (; alphalow <= 'z'; alphalow++)
		putchar(alphalow);

	for (; alphaupp <= 'Z'; alphaupp++)
		putchar(alphaupp);
	/* Adds new line */
	putchar('\n');
	/* Ends  */
	return (0);
}
