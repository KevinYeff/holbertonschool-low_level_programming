#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *        Uses ASCII Values.
 *
 * Return: (0).
 */
int main(void)
{
	/* Declares variable */
	int numbersz = 48;

	/* Defines loop */
	for (; numbersz <= 102; numbersz++)
	{
		/* condition to match the output */
		if ((numbersz <= 57) || (numbersz >= 97))
		/* Prints current value  */
		putchar(numbersz);
	}
	/* Prints new line  */
	putchar('\n');
	/* Ends  */
	return (0);
}
