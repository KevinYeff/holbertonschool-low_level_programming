#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: The passed character to be tested.
 *
 * Return: (1) if c is lowercase otherwise returns (0).
 *
 * Consideration: We are not asked to print but check.
 */

int _islower(int c)
{
	if (!(c >= 97 && c <=122))
		return (0);
	return (1);
}
