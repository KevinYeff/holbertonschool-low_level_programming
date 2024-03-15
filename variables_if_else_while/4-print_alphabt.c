#include <stdio.h>
/**
 * main - Function that prints the alphabet in lowercase
 *        except "q" and "e".
 *        We also can use ASCII Values
 *
 * Return: (0).
 */
int main(void)
{
	/* Declares char variable */
	char alphalow = 'a';
	/* Loop Conditionals */
	for (; alphalow <= 'z'; alphalow++)
	{
		/* Main Condition */
		if (alphalow != 'q' && alphalow != 'e')
			/* Prints value except 'q' and 'e' */
			putchar(alphalow);
		alphalow++;
	}
	/* Prints new line */
	putchar('\n');
	return (0);
}
