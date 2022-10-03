#include <stdio.h>
/**
 * main - Prints all numbers of base 10 starting from "0".
 *
 * Return: (0).
 */
int main(void)
{
	int numbersz;

	numbersz = '0';

	while (numbersz <= '9')
	{
		putchar(numbersz);
		numbersz++;
	}
	putchar('\n');
	return (0);

}
