#include <stdio.h>
/**
 * main - Program that computes and prints the sum of all multipes of
 *        3 or 5 below 1024 (excluded); followed by a new line.
 * Return: (0).
 */
int main(void)
{
	int num, sum;

	num = 0;
	sum = 0;
	while (num < 1024)
	{
		if (num % 3  == 0 || num % 5 == 0)
		{
			sum = sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
