#include "main.h"
/**
 * *_strncat - Function that concatenates two strings.
 * @dest:     Pointer, type char to a string.
 * @src:      Pointer, type char to a string.
 * @n:        Bytes to concatenate.
 * Return:    Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ini = 0, ini2;

	while (*dest != '\0')
	{
		dest++;
		ini++;
	}
	ini2 = 0;
	while (ini2 < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		ini++;
		ini2++;
	}
	dest = dest - ini;
	return (dest);
}
