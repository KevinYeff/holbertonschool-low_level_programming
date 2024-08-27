#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 * @c: character to be tested.
 * Return: (1) if "c" is uppercase, return (0) otherwise.
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90 ? 1 : 0);
}
