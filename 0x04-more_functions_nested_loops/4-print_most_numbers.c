#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 to 9, except 2 and 4, then new line
 *
 * Return: none
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
