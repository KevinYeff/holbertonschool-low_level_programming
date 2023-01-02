#include "search_algos.h"

/**
 * linear_search - Search for a value in an array of integers using the
 * Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not
 * present in array or if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* Return -1 if array is NULL */
	if (array == NULL)
	{
		return (-1);
	}

	/* Iterate through the array, printing the value of each element */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* Return the index if the value is found */
		if (array[i] == value)
		{
			return (i);
		}
	}
	/* Return -1 if the value is not found */
	return (-1);
}
