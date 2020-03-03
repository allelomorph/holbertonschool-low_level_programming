#include "holberton.h"
#include <stdlib.h>

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

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: string to be copied and used to determine size of
 * memory allocation
 *
 * Return: pointer to first address in the space created
 * in memory
 */

char *_strdup(char *str)
{
	int size;
	int i;
	char *p;

	if (str == NULL || *str == '\0')
		return (NULL);

	size = _strlen(str);

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
