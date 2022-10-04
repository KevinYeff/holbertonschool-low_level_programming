#include "main.h"
/**
 * main - Prints _putchar, to the standard output,
 *        followed by a new line.
 *
 * Return: (0).
 */
int main(void)
{
	int i;
	char string[] = "_putchar";

	i = 0;
	while (i <= string[i] && string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
