#include <stdio.h>
/**
 * main - Prints numbers of base 10.
 *
 * Return: (0).
 */

int main(void)
{
	char numbers;

	numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
