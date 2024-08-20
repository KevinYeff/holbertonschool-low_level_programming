#include <stdio.h>

/**
 * print_fibo - Auxiliar function.
 */

void print_fibo(void)
{
	unsigned long int num1, num2, sum, eva;
	int i;

	num1 = 0, num2 = 1, eva = 0;

	for (i = 0; i <= 4000000; i++)
	{
		sum = num1 += num2;
		num1 = num2;
		num2 = sum;

		if (num2 % 2 == 0 && num2 <= 4000000)
		{
			eva += num2;
		}
	}
	printf("%ld\n", eva);
}

/**
 * main - Program that finds and prints the sum of the even-valued terms,
 *        followed by a new line.
 *        considering the terms in the Fibonacci sequence whose values do
 *        not exceed 4,000,000.
 *
 * Return: (0).
 */

int main(void)
{
	print_fibo();
	return (0);
}
