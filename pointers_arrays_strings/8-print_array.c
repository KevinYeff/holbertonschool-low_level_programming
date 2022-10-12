#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array,
 *               followed by a new line.
 * @a: Pointer, type int.
 * @n: Elements of an array.
 */
void print_array(int *a, int n)
{
	int go = 0;

	while (go < n)
	{
		if (go == 0)
			printf("%d", a[go]);
		else
			printf(", %d", a[go]);
		go++;
	}
	printf("\n");
}
