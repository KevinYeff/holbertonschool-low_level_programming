#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Function that allocates memory for an array, using malloc.
 * @nmemb:    Number of elements.
 * @size:     Size of data type.
 * Return:    If nmem || size = 0 return NULL
 *            if malloc fails, function returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocate;
	unsigned int totalLen = nmemb * size, i;
	char *caster;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocate = (char *)malloc(totalLen);

	if (!allocate)
		return (NULL);

	caster = (char *)allocate;

	for (i = 0; i < totalLen; i++)
		*caster++ = 0;

	return (allocate);
}
