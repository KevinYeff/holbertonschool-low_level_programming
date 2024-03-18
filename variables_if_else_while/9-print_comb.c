#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit
 *        numbers.
 *        - Numbers must be separated by a ",", followed by a space.
 *
 * Return: (0);
 */
int main(void)
{
	/* Declares int variable */
	int numbersz = 48;

	/* Defines loop*/
	for (; numbersz <= 57; numbersz++)
	{
		/* Prints current value */
		putchar(numbersz);
		/* Condition to match output */
		if (numbersz != 57)
		{
			/* Prints chars ", "  */
			putchar(44);
			putchar(32);
		}
	}
	/* Prints new line  */
	putchar(10);
	/* Ends  */
	return (0);
}
