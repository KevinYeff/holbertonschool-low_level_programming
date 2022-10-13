#include "main.h"
/**
 * *_strcat - Function that concatenates two strings.
 * @dest:     Pointer, type char to a string.
 * @src:      Pointer, type char to a string.
 * Return:    Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int ini = 0;
	while (*dest != '\0')
	{
		dest++;
		ini++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		ini++;
		src++;
	}
	dest = dest - ini;
	return(dest);
}
