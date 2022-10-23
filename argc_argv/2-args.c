#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 * @argc: Argument counter.
 * @argv: Argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}
	return (0);
}
