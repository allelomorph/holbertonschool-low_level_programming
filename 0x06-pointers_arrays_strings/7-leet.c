#include "holberton.h"
#include <stdio.h>

/**
 * leet - encodes a string into classsic 1337speak
 *
 * @stg: in this definiton, name of string to be modified,
 *       but in protoype dedclaration, it is unnamed
 *
 * Return: modified string
 */

char *leet(char *stg)
{
	int i;
	int j;

	char *rem = "aAeEoOtTlL";
	char *rep = "43071";

/* incrementing to end of stg */
	for (i = 0; stg[i] != 0; i++)
	{
/* incrementing through string of replaceable chars */
		for (j = 0; rem[j] != 0; j++)
		{
/* check if current postiion in stg is a replaceable char */
			if (rem[j] == stg[i])
			{
/* replace with corresponding char from 1337 string */
				stg[i] = rep[(j / 2)];
				break;
			}
		}
	}
	return (stg);
}
