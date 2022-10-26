#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - Fucntion that an array of chars, and initiaizes it with
 *                 a specific char.
 * @size:          Size of array.
 * @c:             Char
 * Return:         Pointer to a array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int inx;
	char *allocate;

	if (size == 0)
		return (NULL);

	allocate = (char*)malloc(sizeof(char) * size);

	if (allocate == NULL)
		return (NULL);

	for(inx = 0; inx < size; inx++)
		allocate[inx] = c;

	return (allocate);
}
