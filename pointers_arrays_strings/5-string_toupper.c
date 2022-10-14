#include "main.h"
/**
 * *string_toupper - Function that changes all lowercase letters of a
 *                   string to uppercase.
 * @p:               Pointer, type char, to a string.
 * Return:           Pointer.
 */
char *string_toupper(char *p)
{
	int index;

	for (index = 0; *(p + index) != '\0'; index++)
	{
		if (*(p + index) >= 97 && *(p + index) <= 122)
		{
			(*(p + index)) = (*(p + index)) - 32;
		}
	}
	return (p);
}
