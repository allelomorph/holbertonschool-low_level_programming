#include "holberton.h"

/**
 * more_numbers - prints the numbers 0 to 14, followed by a new line, 10 times
 *
 * Return: none
 */

void more_numbers(void)
{
	int line;
	int n;

	for (line = 0; line < 10; line++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
