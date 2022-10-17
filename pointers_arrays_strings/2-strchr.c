#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Function that locates a character in a string.
 * @s:        A string.
 * @c:        First occurrence of a character.
 * Return:    Pointer to the first occurrence or NULL if the character
 *            is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
	}
	return (NULL);
}
