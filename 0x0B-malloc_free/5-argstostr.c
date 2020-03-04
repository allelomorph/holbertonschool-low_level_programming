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
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argc, amount of arguments passed from command line,
 * including program name
 *
 * @av: argv, array of strings containing all arguments passed
 * from command line
 *
 * Return: pointer to a new concatenated string of all arguments,
 * each followed by a newline char
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int cc_length;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
/* determine length of concatenated string, including null terminals in args */
	for (i = 0; i < ac; i++)
	{
		cc_length += (_strlen(av[i]) + 1);
	}
/* plus one for final null byte */
	cc_length += 1;
	concat = malloc(sizeof(char) * cc_length);
	if (concat == NULL)
		return (NULL);
/* reuse i as concat incrementer and init to first position */
	i = 0;
/* for each string in array of args */
	for (j = 0; j < ac; j++)
	{
/* for each char in that string */
		for (k = 0; k < (_strlen(av[j]) + 1); k++)
		{
			if (k < _strlen(av[j]))
				concat[i] = av[j][k];
			else
				concat[i] = '\n';
			i++;
		}
	}
/* append final null byte in concatenated string */
	i++;
	concat[i] = '\n';
	return (concat);
}
