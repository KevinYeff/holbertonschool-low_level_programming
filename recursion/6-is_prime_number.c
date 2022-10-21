#include "main.h"
int is_prime_number(int n);
/**
 * prime - Checks recursively if the input number.
 * @h:     Iterator.
 * @num:   Number to check.
 *
 * Return: 1 if n is prime number, otherwise returns 0.
 */

int prime(int h, int num)
{
	if (num % h == 0 || num < 2)
		return (0);
	else if (h == num - 1)
		return (1);
	else if (num > h)
		return (prime(h + 1, num));
	return (1);
}

/**
 * is_prime_number - Function that analizes a number.
 *
 * @n:               Integer to check.
 *
 * Return:           1 if n is a prime number.
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
