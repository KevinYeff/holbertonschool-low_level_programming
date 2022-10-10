#include "main.h"
/**
 * print_rev - Function that prints a string, in reverse,
 *             followed by a new line.
 * @s: Pointer, type char.
 */
void print_rev(char *s)
{
	int go, back;

	go = 0;
	while (*s != '\0')
	{
		s++;
		go++;
	}
	back = go - 1;
	while (back >= 0)
	{
		s--;
		_putchar(*s);
		back--;
	}
	_putchar(10);
}
