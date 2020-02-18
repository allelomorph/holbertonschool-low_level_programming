#include "holberton.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string to be selectively printed
 *
 * Return: void
 */

void puts2(char *str)
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
	length -= 1;
/*
 * end _strlen mimicry, use its value to limit next loop
 */

	for (i = 0; i <= length; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
