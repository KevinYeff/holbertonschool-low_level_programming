#include "main.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1:      Pointer, type char.
 * @s2:      Pointer, type char.
 * Return:   difference or equality between strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		if (*s1 != '\0')
			return (0);
	}
	return (*s1 - *s2);
}
