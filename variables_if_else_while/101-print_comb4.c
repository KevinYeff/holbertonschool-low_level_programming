#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 * Return: Shoulc be 0.
 */
int main(void)
{
	int pos1, pos2, pos3;

	pos1 = 48;

	while (pos1 <= 57)
	{
		pos2 = 48;
		while (pos2 <= 57)
		{
			pos3 = 48;
			while (pos3 <= 57)
			{
				if ((pos1 < pos2) && pos2 < pos3)
				{
					putchar(pos1);
					putchar(pos2);
					putchar(pos3);

					if (pos1 != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				pos3++;
			}
			pos2++;
		}
		pos1++;
	}
	putchar(10);
	return (0);
}
