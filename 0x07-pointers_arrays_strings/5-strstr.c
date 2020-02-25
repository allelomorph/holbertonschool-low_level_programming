#include "holberton.h"
#include <stdio.h>

/**
 * _strpstr - finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are
 * not compared
 *
 * @haystack: string to be searched
 *
 * @needle: substring to find in haystack
 *
 * Return: pointer to first byte in first instance of needle,
 * or NULL if no match is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;
	int match;

	for (i = 0; haystack[i]; i++)
	{
		match = 0;
		for (j = 0; needle[j]; j++)
		{
			k = i;
			if (haystack[k] == needle[j])
			{
				match = 1;
				k++;
				continue;
			}
			else
			{
				break;
			}
		}
		if (match)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
