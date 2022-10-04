#include "main.h"
/**
 * _isalpha - Function that checks for an alphabetic character.
 * @c: Character to be tested.
 * Return: (1) if c is a letter, lowercase or uppercase returns (0) otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
	_putchar(10);
}
