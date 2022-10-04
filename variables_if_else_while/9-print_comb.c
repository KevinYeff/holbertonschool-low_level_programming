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
	int numbersz;

	numbersz = 48;

	while (numbersz <= 57)
	{
		putchar(numbersz);
		if (numbersz != 57)
		{
			putchar(44);
			putchar(32);
		}
		numbersz++;
	}
	putchar(10);
	return (0);
}
