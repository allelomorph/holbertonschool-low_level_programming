#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be measured
 *
 * Return: amount of chars in string
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s; s++)
	{
		length++;
	}
	return (length);
}
