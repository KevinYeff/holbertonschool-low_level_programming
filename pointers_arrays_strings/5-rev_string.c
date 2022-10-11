#include "main.h"
int _strlen(char *);
/**
 * rev_string - Function that reverses a string.
 * @s: Pointer, type char.
 */
void rev_string(char *s)
{
	int len, back;
	char *start, *end, temp;

	start = s;
	end = s;
	len = _strlen(s);
	back = 0;
	while (back < len - 1)
	{
		back++;
		end++;
	}
	back = 0;
	while (back < len / 2)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
		back++;
	}
}

/**
 * _strlen - Fucntion that returns the length of a string.
 * @s: Pointer, type char.
 * Return: A variable containing the length of a string.
 */

int _strlen(char *s)
{
	int go = 0;

	while (*s != '\0')
	{
		s++;
		go++;
	}
	return (go);
}
