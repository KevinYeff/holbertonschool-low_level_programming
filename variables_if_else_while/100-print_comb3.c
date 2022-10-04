#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: (0).
 */
int main(void)
{
	int pos1, pos2;

	pos1 = 48;
	while (pos1 <= 57)
	{
		pos2 = pos1 + 1;
		while (pos2 <= 57)
		{
			if (pos1 <= pos2)
			{
				putchar(pos1);
				putchar(pos2);
				if (pos1 != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		pos2++;
		}
	pos1++;
	}
	putchar(10);
	return (0);
}
