#include <stdio.h>
/**
 * main - Prints all numbers of base 10 starting from "0".
 *        Uses ASCII values.
 *
 * Return: (0).
 */
int main(void)
{
	/* Declares int variable */
	int numbersz = 48;
	/* Defines loop */
	for (; numbersz <= 57; numbersz++)
		/*Prints current value*/
		putchar(numbersz);
	/* Prints new line*/
	putchar(10);
	/* Ends */
	return (0);
}
