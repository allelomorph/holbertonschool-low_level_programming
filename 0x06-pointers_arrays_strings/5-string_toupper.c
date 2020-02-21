#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - capitalizes all lowercase letters in a string
 *
 * @stg: in this definiton, name of string to be modified,
 *       but in protoype dedclaration, it is unnamed
 *
 * Return: modified string
 */

char *string_toupper(char *stg)
{
	int i;

/* incrementing to null terminus of string */
	for (i = 0; stg[i] != 0; i++)
	{
/* test for lowercase alphabet ASCII values */
		if ((stg[i] >= 'a') && (stg[i] <= 'z'))
		{
/* capitalize by dropping ASCII value, indicentally, difference = ' ' */
			stg[i] = (stg[i] - 32);
		}
	}
	return (stg);
}
