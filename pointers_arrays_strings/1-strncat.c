#include "main.h"
/**
 * *_strcat - Function that concatenates two strings.
 * @dest:     Pointer, type char to a string.
 * @src:      Pointer, type char to a string.
 * Return:    Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ini = 0;

	while (*dest != '\0')
	{
		dest++;
		ini++;
	}
	while (*src != '\0' && *src < n)
	{
		*dest = *src;
		dest++;
		ini++;
		src++;
	}
	dest = dest - ini;
	return (dest);
}
