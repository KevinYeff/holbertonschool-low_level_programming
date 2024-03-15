#include <stdio.h>
/**
 * main - Prints numbers of base 10.
 *        Uses char representation of integers.
 *
 * Return: (0).
 */

int main(void)
{
	/* Declare char variable */
	char numbers = '0';
	/* Loop  */
	for (; numbers <= '9'; numbers++)
		/* Print current value  */
		putchar(numbers);
	/* Prints new line  */
	putchar('\n');
	/* End */
	return (0);
}
