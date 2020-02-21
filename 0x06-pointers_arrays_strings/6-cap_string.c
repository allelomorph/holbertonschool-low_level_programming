#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words in a string. valid word
 * separators include: ' ', '\t', '\n', ',', ';', '.', '!', '?',
 * '"', '(', ')', '{', and '}'
 *
 * @stg: in this definiton, name of string to be modified,
 *       but in protoype dedclaration, it is unnamed
 *
 * Return: modified string
 */

char *cap_string(char *stg)
{
	int i;
	int d;
	char *delim = " \t\n,;.!?\"(){}";

/* workaround to address first character in string without refactoring */
	if ((stg[0] >= 'a') && (stg[0] <= 'z'))
	{
		stg[0] = (stg[0] - 32);
	}

/* incrementing to end of stg */
	for (i = 1; stg[i] != 0; i++)
	{
/* incrementing through string of delimiter chars */
		for (d = 0; delim[d] != 0; d++)
		{
/* check if current postiion in stg is a delimiter */
			if (stg[i] == delim[d])
			{
/* test for lowercase alphabet ASCII values */
				if ((stg[(i + 1)] >= 'a') && (stg[(i + 1)] <= 'z'))
				{
/* capitalize by dropping ASCII value, indicentally, difference = ' ' */
					stg[(i + 1)] = (stg[(i + 1)] - 32);
				}
			}
		}
	}
	return (stg);
}
