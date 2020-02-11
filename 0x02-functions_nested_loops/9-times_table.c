#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int base, mult;

	for (base = 0; base < 10; base++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			if ((base * mult) < 10)
			{
				_putchar((base * mult) + '0');
			}
			else
			{
				_putchar(((base * mult) / 10) + '0');
				_putchar(((base * mult) % 10) + '0');
			}
			if (mult == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if ((base * (mult + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
	}
}
