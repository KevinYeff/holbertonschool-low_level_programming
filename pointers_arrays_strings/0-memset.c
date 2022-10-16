#include "main.h"
/**
 * *_memset - Function that fills memory wiith a constant byte.
 * @s:        Pointer to a memory area.
 * @b:        Constant byte.
 * @n:        n bytes to fill.
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
