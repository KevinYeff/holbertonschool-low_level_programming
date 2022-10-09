#include <stdio.h>
/**
 * main - Program tha prints the 50 Fibonacci numbers, starting with 1
 *        and 2, followed by a new line.
 *        Numbers must be separated by comma, followed by a space.
 * Return: (0).
 */

int main(void)
{
	unsigned long num1, num2, sum;
	int i;

	i = 0;
	num1 = 0;
	num2 = 1;
	while (i < 50)
	{
		sum = num1 += num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}
	return (0);
}
