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


	if (str == NULL)
		return (NULL);
/*
 *	if (*str == '\0')
 *		size = 1;
 *	else
 */
	size = (_strlen(str) + 1);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
