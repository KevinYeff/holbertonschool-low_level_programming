#include <stdio.h>
/**
 * main - Prints the alphabet in lower case
 *        uses ASCII Values.
 *
 * Return: (0).
 */

int main(void)
{
	/* Declares var type char */
	char currentLetter;

	/* Iterates through the ascii values from a to z */
	for (currentLetter = 97; currentLetter <= 122; currentLetter++)
		/* Prints the current letter till break the condition */
		putchar(currentLetter);
	/* Prints a new line */
	putchar(10);
	/* Ends */
	return (0);
}
