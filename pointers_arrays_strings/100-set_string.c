#include "main.h"

/**
 * set_string - Function that sets the value of a pointer
 *              to a char.
 * @s:          Pointer to pointer.
 * @to:         Pointer.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
