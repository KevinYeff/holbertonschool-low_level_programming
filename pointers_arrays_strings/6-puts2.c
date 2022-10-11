#include "main.h"
int _strlen(char *);
/**
 * puts2 - Function that prints every other character of a string
 *         starting with the first character, followed by a new line.
 * @str: Pointer, type char.
 */
void puts2(char *str)
{
	int len = _strlen(str), index;

	index = 0;
	while (index < len)
	{
		_putchar(*str);
		str += 2;
		index += 2;
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
