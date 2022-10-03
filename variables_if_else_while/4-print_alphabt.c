#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase
 *        except "q" and "e".
 *
 * Return: (0).
 */
int main(void)
{
	char alphalow;

	alphalow = 'a';

	while (alphalow <= 'z')
	{
		if (alphalow != 'q' && alphalow != 'e')
		{
			putchar(alphalow);
		}
		alphalow++;
	}
	putchar('\n');
	return (0);
}
