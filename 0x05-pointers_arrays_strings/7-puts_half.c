#include "holberton.h"

/**
 * puts_half - prints second half of a string, followed by a new line
 *
 * @str: string to be selectively printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length;
	char *st;
/*
 * adapting code form _strlen
 * will it eventually be defined in other file??
 * easier to just do:
 * int i = (_strlen(s) -1);
 */
	st = str;
	for (length = 0; *st; st++)
	{
		length++;
	}
/*
 * end _strlen mimicry, use its value to limit next loop
 */


/* cycle through str positions */
	for (i = 0; i < length; i++)
	{
		/* print last half if length is even */
		if ((length % 2) == 0)
		{
			if (i >= (length / 2))
			{
				_putchar(str[i]);
			}
		}
		/* print last (length - 1) / 2 if length is odd */
		else if (i >= (length - ((length - 1) / 2)))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
