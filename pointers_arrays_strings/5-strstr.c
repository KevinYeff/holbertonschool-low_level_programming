#include "main.h"
/**
 * *_strstr - Function that locates a substring.
 * @haystack:  A given string.
 * @needle:   A substring.
 * Return:    A pointer to the beginning of the located substring,
 *            or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
