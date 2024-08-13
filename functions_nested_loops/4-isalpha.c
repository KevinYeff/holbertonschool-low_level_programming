#include "main.h"

/**
 * _isalpha - Function that checks for an alphabetic character.
 * @c: The given character to be tested.
 *
 * Return: (1) if c is a letter, lowercase or uppercase returns (0) otherwise.
 *
 * Consideration: We are not asked to print but check.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
