#include "main.h"
/**
 * _islower - Function that checks for lowercase character.
 * @c: Character to be tested.
 * Return: (1) if c is lowercase otherwise returns (0).
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
