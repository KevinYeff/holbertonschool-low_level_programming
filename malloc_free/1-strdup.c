#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *);
char *_strcpy(char *dest, char *src);
/**
 * *_strdup - Funtion that returns a pointer to a newly allocated space in
 *            memory, which contains a copy of the string given as a parameter.
 * @str:      A given string.
 * Return:    A pointer to the duplicated string.
 *            NULL if insufficient memory.
 *            NULL if str = NULL.
 */

char *_strdup(char *str)
{
	int totalLen;
	char *allocate;

	if (str == NULL)
		return (NULL);

	totalLen = _strlen(str);

	allocate = (char *)malloc(sizeof(char) * totalLen + 1);

	if (allocate == NULL)
		return (NULL);

	_strcpy(allocate, str);
	return (allocate);
}

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
