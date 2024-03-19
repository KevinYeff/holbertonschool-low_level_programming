#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 *        Uses ASCII Values.
 *
 * Return: Should be 0.
 */
int main(void)
{
	/* Declares int variables */
	int pos1 = 48, pos2, pos3;
	/* Defines main/nested loops */
	for (; pos1 <= 55; pos1++)
	{
		for (pos2 = pos1 + 1; pos2 <= 56; pos2++)
		{
			for (pos3 = pos2 + 1; pos3 <= 57; pos3++)
			{
				/* Prints current values */
				putchar(pos1);
				putchar(pos2);
				putchar(pos3);
				/* Condition to match the output*/
				if (pos1 != 55)
				{
					/* Prints chars ", " */
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	/* Prints new line */
	putchar(10);
	/* Ends */
	return (0);
}
