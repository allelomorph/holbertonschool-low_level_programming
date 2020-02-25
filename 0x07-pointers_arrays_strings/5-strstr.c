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
/* 3rd build after 2nd cosult, see draft file for other attempts */
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
}
