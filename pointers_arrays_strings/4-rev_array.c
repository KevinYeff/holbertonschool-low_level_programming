#include "main.h"
/**
 * reverse_array - Funciton that reverses the content of an array of integers.
 * @a:             Pointer to an array of integers.
 * @n:             Number of element of the array.
 */
void reverse_array(int *a, int n)
{
	int index, aux, div;

	div = n / 2;
	for (index = 0; index < div; index++)
	{
		aux = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = aux;
	}
}
