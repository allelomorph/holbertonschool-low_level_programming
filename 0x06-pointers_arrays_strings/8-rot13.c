#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encodes a string into rot13
 *
 * @stg: in this definiton, name of string to be modified,
 *       but in protoype dedclaration, it is unnamed
 *
 * Return: modified string
 */

char *rot13(char *stg)
{
	int i;
	int j;

	char *rem = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rep = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

/* incrementing to end of stg */
	for (i = 0; stg[i] != 0; i++)
	{
/* incrementing through string of replaceable chars */
		for (j = 0; rem[j] != 0; j++)
		{
/* check if current postiion in stg is a replaceable char */
			if (rem[j] == stg[i])
			{
/* replace with corresponding char from ROT-13 string */
				stg[i] = rep[j];
				break;
			}
		}
	}
	return (stg);
}
