#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 *        The numbers should range from 0 to 99.
 *
 * Return: (0).
 */
int main(void)
{
	int comb1, comb2;

	comb1 = 0;
	while (comb1 <= 99)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 99)
		{
			putchar((comb1 / 10) + '0');
			putchar((comb1 % 10) + '0');
			putchar(32);
			putchar((comb2 / 10) + '0');
			putchar((comb2 % 10) + '0');
			if (comb1 != 98)
			{
				putchar(44);
				putchar(32);
			}
			comb2++;
		}
		comb1++;
	}
	putchar(10);
	return (0);
}
