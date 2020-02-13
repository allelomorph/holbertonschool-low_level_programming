#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: input number, determines length of "hypotenuse" in '\' segments
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int segment;
	int offset;

	if (n > 0)
	{
		for (segment = 0; segment < n; segment++)
		{
			for (offset = 0; offset < segment; offset++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
