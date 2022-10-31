#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array:     The array.
 * @size:      Size of the array.
 * @cmp:       Pointer to a function to be used to compare values.
 * Return:     An element of the array otherwise returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
