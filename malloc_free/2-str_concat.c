#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
/**
 * *str_concat - Function that concatenates two strings.
 * @s1:          String number 1.
 * @s2:          String number 2.
 * Return:       a pointer to a newly allocated space wich
 *               contains the contents of s1 and s2.
 *               returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *allocate;
	int s1len, s2len, inx;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	allocate = malloc((sizeof(char) * s1len) +
			  (sizeof(char) * s2len) + 1);

	if (allocate == 0)
		return (NULL);

	inx = 0;
	while (*s1 != '\0')
	{
		*allocate = *s1;
		allocate++;
		s1++;
		inx++;
	}
	while (*s2 != '\0')
	{
		*allocate = *s2;
		allocate++;
		s2++;
		inx++;
	}
	*allocate = '\0';

	return (allocate - inx);
}


/**
 * _strlen - Function that returns the length of a string.
 * @s:       Pointer type char.
 * Return:   The length of the string.
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
