#include "holberton.h"

/**
 * print_square - draws a diagonal line on the terminal
 *
 * @size: determines length of square drawn in block of '#' tiles
 *
 * Return: none
 */

void print_square(int size)
{
	int width;
	int height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
