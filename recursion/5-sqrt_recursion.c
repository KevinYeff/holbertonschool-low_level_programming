#include "main.h"
int rootscan(int n, int h);
/**
 * _sqrt_recursion - Function that returns the natural square
 *                   root of a number.
 * @n:               Integer.
 * Return:           Square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (rootscan(n, 2));
}

/**
 * rootscan - Will check if n has a natural square root.
 *
 * @n:        Number to compare its power to the number.
 * @h:        Iterate number.
 *
 * Return: Square root of number.
 */

int rootscan(int n, int h)
{
	if (h * h == n)
		return (h);
	if (h * h > n)
		return (-1);
	return (rootscan(n, h + 1));
}
