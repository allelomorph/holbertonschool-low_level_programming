#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - finds the length ofa prefix substring
 *
 * @s: string to be searched
 *
 * @accept: filter list of characters
 *
 * Return: number of bytes of s that consist of only the chars
 * allowed by accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n = 0;
	int match;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			match = 0;
			if (s[i] == accept[j])
			{
				n++;
				match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
	}
	return (n);
}
