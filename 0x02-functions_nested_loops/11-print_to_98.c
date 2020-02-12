#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, plus a new line.
 * @n: value that determines boundary of set of naturals to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n >= 98; n--)
		{
			printf("%i", n);
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
	else
	{
		for ( ; n <= 98; n++)
		{
			printf("%i", n);
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
}
