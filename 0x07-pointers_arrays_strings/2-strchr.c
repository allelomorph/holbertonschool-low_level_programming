#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be searched
 *
 * @c: char search target
 *
 * Return: pointer to first occurance of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
