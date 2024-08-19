#include <stdio.h>
/**
 * main - Program that computes and prints the sum of all multipes of
 *        3 or 5 below 1024 (excluded); followed by a new line.
 * Return: (0).
 */
int main(void)
{
	int num, sum;

	for (num = 1023; num > 2; num--)
	{
		if (num % 3  == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
