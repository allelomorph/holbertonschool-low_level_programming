#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares the aggregate ASCII value of two strings
 *
 * @s1: first string to compare
 *
 * @s2: second string to compare
 *
 * Return: pointer to dest after copying
 */

int _strcmp(char *s1, char *s2)
{
	char *s1a;
	char *s2a;

	int diff = 0;

/* record starting addresses of s1 and s2 */
	s1a = s1;
	s2a = s2;

/* increment through s1 and s2 until first null between them */
	while (*s1 && *s2)
	{
		diff = (*s1 - *s2);
/* if ASCII values are not the same, stop looking */
		if (diff != 0)
		{
			break;
		}
		s1++;
		s2++;
	}

/* reset pointers for s1 and s2 to their original starting values */
	s1 = s1a;
	s2 = s2a;

/* return integer difference of last measured position in s1 and s2 */
	return (diff);
}
