#include "stdio.h"
#include <stdlib.h>
/**
 * main - Prints its name followed by a new line.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: success.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);
	exit (EXIT_SUCCESS);
}
