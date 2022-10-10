#include <stdio.h>
/**
 * main - Print the largest prime factor of "612852475143".
 * Return: (0).
 */
int main(void)
{
	unsigned long num, div;

	num = 612852475143;
	div = 2;
	while (div < num)
	{
		if (num % div == 0)
		{
			num /= div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", num);
	return (0);
}
