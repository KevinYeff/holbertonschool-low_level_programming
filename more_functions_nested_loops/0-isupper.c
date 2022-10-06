#include "main.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: character to be tested.
 * Return: (1) if "c" is uppercase, return (0) otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
