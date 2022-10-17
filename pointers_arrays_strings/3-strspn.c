#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s:       A string.
 * @accept:  Bytes to be counted in the string pointed by s.
 * Return:   The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *str = s;
	char *gonback;

	while (*s)
	{
		for (gonback = accept; *gonback; gonback++)
		{
			if (*s == *gonback)
				break;
		}
		if (*gonback == '\0')
			break;
		s++;
	}
	return (s - str);
}
