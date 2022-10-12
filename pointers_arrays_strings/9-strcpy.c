#include "main.h"
int _strlen(char *);
/**
 * *_strcpy - Function that copies a string included the null bite
 *            to a buffer.
 * @dest:     Pointer to a buffer.
 * @src:      Pointer to string.
 * Return:    Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index, len;

	index = 0;
	len = _strlen(src);
	while (index < len)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * _strlen - Function that returns the length of a string.
 * @s:       Pointer, type char.
 * Return:   A variable that contains the lenght of the string.
 */
int _strlen(char *s)
{
	int go = 0;

	while (*s != '\0')
	{
		s++;
		go++;
	}
	return (go);
}
