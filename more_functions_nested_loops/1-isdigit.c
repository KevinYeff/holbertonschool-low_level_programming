#include "main.h"
/**
 * _isdigit - Function that checks for a digit (0 trought 9).
 * @c: Digit to be tested.
 * Return: (1) if "c" is a digit, return (0) otherwise.
 */
int _isdigit(int c)
{
	int digit;

	digit = c;
	if (digit >= 48 && digit <= 57)
	{
		return (1);
	}
	else
		return (0);
}
