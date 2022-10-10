#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line,
 *         to stdout.
 * @str: Pointer, type char.
 */
void _puts(char *str)
{
	int go = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		go++;
	}
	_putchar(10);
}
