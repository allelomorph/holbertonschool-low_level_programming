#include "holberton.h"

/**
 * print_alphabet_x10 -  prints 10 x the alphabet, lowercase, after which a \n
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
