#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length;
	int temp;
	char *st;
/*
 * adapting code form _strlen
 * will it eventually be defined in other file??
 * easier to just do:
 * int i = (_strlen(s) -1);
 */
	st = s;
	for (length = 0; *st; st++)
	{
		length++;
	}
	length -= 1;
/*
 * end _strlen mimicry, use its value to limit next loop
 */

	for (i = 0; i <= (length / 2) ; i++)
	{
		temp = s[(length - i)];
		s[(length - i)] = s[i];
		s[i] = temp;
	}
}
