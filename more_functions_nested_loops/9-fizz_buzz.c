#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Prints a character.
 * @s: Char to be printed.
 *
 * Return: Char in to the stdout.
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}

/**
 * _print_string - Function that prints a string.
 * @string: A given string.
 */

void _print_string(char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
}

/**
 * main - Program that prints from 1 to 100 followed by
 *        a new line,  But for multiples of three print Fizz
 *        for the multiples of five print Buzz,
 *        For numbers which are multiples of both three and
 *        five print FizzBuzz.
 *
 * Return: (0).
 */

int main(void)
{
	char s1[] = "Fizz";
	char s2[] = "Buzz";
	char s3[] = "FizzBuzz";
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 3 == 0 && numbers % 5 == 0)
			_print_string(s3);

		else if (numbers % 5 == 0)
			_print_string(s2);

		else if (numbers % 3 == 0)
			_print_string(s1);

		else
		{
			if (numbers < 10)
				_putchar(numbers + '0');
			else
			{
				_putchar(numbers / 10 + 48);
				_putchar(numbers % 10 + 48);
			}
		}
		if (numbers < 100)
			_putchar(32);
	}
	_putchar(10);
	return (0);
}
