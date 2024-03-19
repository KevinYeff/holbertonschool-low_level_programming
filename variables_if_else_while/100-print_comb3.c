#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *        Uses ASCII values.
 *
 * Return: (0).
 */
int main(void)
{
	/* Declares variables  */
	int pos1 = 48, pos2;
	/* Declares nested loop  */
	for (; pos1 <= 56; pos1++)
	{
		/* start pos2 at pos1 + 1, so we can get no duplicates  */
		for (pos2 = pos1 + 1; pos2 <= 57; pos2++)
		{
			/* Pint current positions  */
			putchar(pos1);
			putchar(pos2);
			/* Prints ", " under conditions */
			if (pos1 != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	/* Prins new line  */
	putchar(10);
	/* Ends  */
	return (0);
}
