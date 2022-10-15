#include "main.h"
char *cap_string(char *s);
/**
 * *cap_string - Function that capitalizes all words of a string.
 * @p:           Pointer to string.
 * Return:       Pointer to the resultant string.
 */
char *cap_string(char *s)
{
	int inx1, inx2;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	inx1 = 0;
	if (*(s + inx1) >= 97 && *(s + inx1) <= 122)
	{
		*(s + inx1) = *(s + inx1) - 32;
	}
	inx1++;
	while (*(s + inx1) != '\0')
	{
		inx2 = 0;
		while (inx2 < 13)
		{
			if (*(s + inx1) == sep[inx2])
			{
				if ((*(s + (inx1 + 1)) >= 97) &&
				    (*(s + (inx1 + 1)) <= 122))
				{
					*(s + (inx1 + 1)) =
						*(s + (inx1 + 1)) - 32;
				}
				break;
			}
			inx2++;
		}
		inx1++;
	}
	return (s);
}
