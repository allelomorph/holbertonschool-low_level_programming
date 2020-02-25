#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle
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
/* 3rd draft after 2nd cosult, see draft file for other attempts
{
	int i;

	for (; *haystack; haystack++)
	{
		for (i = 0; *(needle + i); i++)
		{
			if (*(needle + i) != *(haystack + i))
			{
				break;
			}
		}
		if (!*(needle + i))
		{
			return (haystack);
		}
	}
	return (NULL);
}*/

/* first draft, missed one output check */
{
	int i;
	int match;

	for (; *haystack; haystack++)
	{
		for (i = 0; *(needle + i); i++)
		{
			if (*(haystack + i) == *(needle + i))
			{
				match = 1;
				continue;
			}
			else
			{
				match = 0;
				break;
			}
		}
		if (match && (*(needle + i) == 0))
		{
			return (haystack);
		}
	}
	return (0);
}
