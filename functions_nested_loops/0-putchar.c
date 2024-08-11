#include "main.h"
/**
 * main - Prints _putchar, to the standard output,
 *        followed by a new line.
 *
 * Return: (0).
 *
 * Considerations: "_putchar" string to print, given in the task.
 */
int main(void)
{
	int i;
	char string[] = "_putchar";

	for (i = 0; i <= string[i] && string[i] != '\0'; i++)
		_putchar(string[i]);
	_putchar(10);
	return (0);
}
