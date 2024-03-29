#include "main.h"
/**
 * _puts_recursion - Function that prints a given string using recursion.
 * @s:               Pointer to a string.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
