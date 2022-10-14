#include "main.h"
/**
 * *_strncpy - Copies n characters to a string.
 * @dest:      Pointer to a target string.
 * @src:       Pointer to source string.
 * @n:         n characters to copy.
 * Return:     target string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && *(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}
	while (index < n)
	{
		*(dest + index) = '\0';
		index++;
	}
	return (dest);
}
