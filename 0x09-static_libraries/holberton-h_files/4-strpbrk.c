#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 *
 * @s: string to be searched
 *
 * @accept: filter list of characters
 *
 * Return: pointer to first byte in s that matches one member
 * of accept, or NULL if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
