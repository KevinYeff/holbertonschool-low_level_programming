#include <stdio.h>
#include <stdlib.h>

/**
  * main - Program that prints the result  that multiplies two numbers.
  * @argc: Argument count.
  * @argv: Argument vector.
  * Return: Always 0
  **/

int main(__attribute__((unused))int argc, char *argv[])
{
	int h, k, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	h = atoi(argv[1]);
	k = atoi(argv[2]);

	result = h * k;
	printf("%d\n", result);

	return (0);
}
