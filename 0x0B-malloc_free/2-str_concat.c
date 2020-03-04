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
 * str_concat - concatenates two strings
 *
 * @s1: first string to be copied to a new memory adress,
 * minus terminal null byte
 *
 * @s2: second string to be copied to a memory adress
 * immediately following the last address in the copied s1
 *
 * Return: pointer to first address in the space created
 * in memory
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int i;
	char *p;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = _strlen(s1);

	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = _strlen(s2);
/* malloc space for third string that is the combined length +1 for \0 */
	p = malloc(sizeof(char) * ((s1_len + s2_len) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		p[s1_len + i] = s2[i];
	}
/* append terminal null to concatenated string */
	p[s1_len + s2_len] = '\0';

	return (p);
}
