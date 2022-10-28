#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Function that concatenates two strings.
 * @s1:              First string.
 * @s2:              Second string.
 * @n :              Number of characters to take from string number 2.
 * Return:           A pointer to a newly allocated spae in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *allocate;
	unsigned int totalLen, i;

	if (!s1)
		return ("");
	if (!s2)
		return ("");

	totalLen = n;

	for (i = 0; s1[i] != '\0'; i++)
		;
	totalLen += i;

	allocate = (char *)malloc(sizeof(char) * (totalLen + 1));

	if (allocate == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
		*allocate++ = *s1++;

	for (i = 0; *s2 && i < n; i++)
		*allocate++ = *s2++;

	*allocate = '\0';

	return (allocate - totalLen);
}
