#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: input number, determines length of line in '_' segments
 *
 * Return: none
 */

void print_line(int n)
{
	int segment;

	if (n > 0)
	{
		for (segment = 0; segment < n; segment++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
