#include "main.h"
/**
 * *_memcpy - Function that copies memory area.
 * @dest:     Memory area to fill.
 * @src:      Memory area to copy in to dest.
 * @n:        Bytes to fill.
 * Return:    Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int inx;

	for (inx = 0; inx < n; inx++)
		*(dest + inx) = *(src + inx);
	return (dest);
}
