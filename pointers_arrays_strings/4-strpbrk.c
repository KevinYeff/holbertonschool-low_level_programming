#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Function that searches a string for any of a set of bytes.
 * @s:         Given string.
 * @accept:    Bytes that define the first occurrence.
 * Return:     Pointer to the byte in s that matches one of the bytes
 *             in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *go;

	if (!*s || !*accept)
		return (NULL);
	while (*s)
	{
		for (go = accept; *go != '\0'; go++)
		{
			if (*s == *go)
				break;
		}
		if (*go)
			break;
		s++;
	}
	if (*go == '\0')
		s = NULL;
	return (s);
}
