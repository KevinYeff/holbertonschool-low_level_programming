#include "main.h"
/**
 * _atoi - Function that convert a string to an integer.
 * @s:     String.
 * Return: Integers.
*/
int _atoi(char *s)
{
	int inx, sign;
	unsigned int atoi;

	atoi = 0;
	inx = 0;
	sign = 1;

	while (!(*(s + inx) >= 48 && (*(s + inx) <= 57)) && *(s + inx) != '\0')
	{
		if (*(s + inx) == 45)
		{
			sign *= -1;
		}
		inx++;
	}

	while ((*(s + inx) >= 48) && (*(s + inx) <= 57) && *(s + inx) != '\0')
	{
		atoi = atoi * 10 + (*(s + inx) - '0');
		inx++;

		if (*(s + inx) == '\0')
			break;
	}
	return (atoi * sign);
}
