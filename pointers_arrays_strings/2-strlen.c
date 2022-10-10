#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer type char.
 * Return: The length of the string.
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
