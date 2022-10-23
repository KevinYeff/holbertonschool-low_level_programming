#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that add positive numbers.
 * @argc: Argument counter.
 * @argv: Argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum, h;
	char *p;
	int num;

	sum = 0;

	if (argc > 1)
	{
		for (h = 1; argv[h]; h++)
		{
			num = strtol(argv[h], &p, 10);
			if (!*p)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
