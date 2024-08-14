#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @h: Is the int that will be computed.
 *
 * Return: Should be the absolute value of h.
 */

int _abs(int h)
{
	return (h < 0 ? h *= -1 : h);
}
