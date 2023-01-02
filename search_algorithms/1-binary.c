#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array.
 * @array:         A pointer to the first element of the array to search.
 * @size:          The number of elements in the array.
 * @value:         The value to search for.
 * Return:         If the value is not present or the array is NULL, -1.
 *                 Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			right = mid - 1;

		else
			left = mid + 1;
	}

	return (-1);
}
