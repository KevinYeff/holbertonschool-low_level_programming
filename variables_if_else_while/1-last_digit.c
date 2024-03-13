#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints The last digit of a random number whether is positive,
 *        negative or zero.
 *
 * Return: (0).
 */

int main(void)
{
	/*Declares variables*/
	int n, ld;
	/* Sets the seed, uses current time */
	srand(time(0));
	/* Saves pseudo-random number to variable n*/
	n = rand() - RAND_MAX / 2;
	/* Extracts the last digit and saves it to variable ld */
	ld = n % 10;

	/* Conditionals behaviors */
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, ld);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, ld);
	/* Ends */
	return (0);
}
