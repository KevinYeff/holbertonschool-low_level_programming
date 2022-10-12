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
	char *half;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	half = str + n;
	while (half)
	{
		_putchar(*half);
		half++;
		if (*half == '\0')
		{
			break;
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
