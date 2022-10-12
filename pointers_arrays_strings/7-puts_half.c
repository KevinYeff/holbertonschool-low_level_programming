#include "main.h"
#include <stdlib.h>
int _strlen(char *);
/**
 * puts_half - Function that prints half of a string,
 *             followed by a new line.
 * @str:       Pointer, type char, string.
 */
void puts_half(char *str)
{
	int len = _strlen(str), n;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	str += n;
	while (str)
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
		{
			break;
			free(str);
		}
	}
	_putchar(10);
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
