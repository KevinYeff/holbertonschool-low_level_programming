#include "main.h"
/**
 * _abs - Function that computes the absolute value of an integer.
 * @h: Is the int that will be computed.
 * Return: Should be 0.
 */
int _abs(int h)
{
	if (h < 0)
	{
		h = h * (-1);
	}
	return (h);
}
