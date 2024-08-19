#include <stdio.h>

/**
 * print_fibo - Prints the fibonacci numbers.
 * @fibo: Represents the n fibonacci numbers.
 */

void print_fibo(int fibo)
{
	unsigned long int num1 = 0, num2 = 1, sum;
	int i;

	for (i = 0; i < fibo; i++)
	{
		sum = num1 += num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * main - Calls the program that prints the 50 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 *        Numbers must be separated by comma, followed by a space.
 *
 * Return: (0).
 */

int main(void)
{
	int fibo = 50;

	print_fibo(fibo);
	return (0);
}
