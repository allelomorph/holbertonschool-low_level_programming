#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings a defined amount
 *
 * @n: amount of characters/bytes from src to copy
 *
 * @dest: string to have content added from src
 *
 * @src: string to be read
 *
 * Return: pointer to dest after conacatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d;
	char *s;

	d = dest;
	s = src;

/* increment dest address to null byte */
	while (*dest)
	{
		dest++;
	}

/*
 * increment through src addresses n times, or until null,
 * assigning content to end of dest
 */
	while (*src && (src - s) < n)
	{
		*dest = *src;
		src++;
		dest++;
	}

/* append null byte to concatenated string manually */
	dest++;
	*dest = '\0';

/* reset pointers for dest and src to their original starting values */
	dest = d;
	src = s;

	return (dest);
}
