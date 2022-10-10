#include <stdio.h>
/**
 * main - Program that finds and prints the sum of the even-valued terms,
 *        followed by a new line.
 *        considering the terms in the Fibonacci sequence whose values do
 *        not exceed 4,000,000.
 * Return: (0).
 */
int main(void)
{
	unsigned long num1, num2, sum, eva;

	num1 = 0, num2 = 1, eva = 0;
	while (1)
	{
		sum = num1 += num2;
		num1 = num2;
		num2 = sum;
		if (num2 > 4000000)
			break;
		if (num2 <= 4000000 && num2 % 2 == 0)
			eva = eva + num2;
	}
	printf("%ld\n", eva);
	return (0);
}
