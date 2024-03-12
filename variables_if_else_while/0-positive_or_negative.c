#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number whether positive, negative or zero.
 *
 * Return: (0).
 */

int main(void)
{
	/* Declares an integer named n */
	int n;
	/* Sets the seed  */
	srand(time(0));
	/*
	* Generates the pseudo-random number it could be positive or negative
	* according to the expresion
	*/
	n = rand() - RAND_MAX / 2;

	/* Conditonal behaviors*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
