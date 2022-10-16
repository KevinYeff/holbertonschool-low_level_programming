#include "main.h"
char *leet(char *);
/**
 * *leet - Function that encoes a string into 1337.
 * @str: Pointer to a string.
 * Return: (0).
 */
char *leet(char *str)
{
	int inx1, inx2;
	char find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replacer[] = {'4', '3', '0', '7', '1'};

	inx1 = 0;
	while (*(str + inx1) != '\0')
	{
		inx2 = 0;
		while (inx2 < 5)
		{
			if (*(str + inx1) == find[inx2])
				*(str + inx1) = replacer[inx2 / 2];
			inx2++;
		}
		inx1++;
	}
	return (str);
}
