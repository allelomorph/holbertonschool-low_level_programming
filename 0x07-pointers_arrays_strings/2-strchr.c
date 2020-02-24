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
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
