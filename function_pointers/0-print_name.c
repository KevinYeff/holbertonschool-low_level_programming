#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that prints a name.
 * @name:       Name to print.
 * @f:          Pointer to a function.
 * Return:      void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	else
		f(name);
	return;
}
