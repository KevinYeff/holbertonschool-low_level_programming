#include "3-calc.h"
#include <stdlib.h>

/**
 * main -  Calc the basic operations.
 * @argc:  Argument counter.
 * @argv:  Argument vector.
 * Return: (0).
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *opr = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*opr != '+' && *opr != '-' && *opr != '*' && *opr != '/'
	     && *opr != '%') || *(opr + 1) != 0)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*opr == '/' || *opr == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
