#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copies n bytes of src to dest
 *      --> if there is no null within the first n bytes of src,
 *          no null is copied
 *      --> if length of src is less than n bytes, the remaining bytes
 *          of dest are filled with null bytes
 *
 * @n: amount of characters/bytes from src to copy
 *
 * @dest: string to have content added from src
 *
 * @src: string to be read
 *
 * Return: pointer to dest after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *d;
	char *s;

	d = dest;
	s = src;

/*
 * increment through src addresses n times, or until null,
 * assigning content to same index values in dest
 */
	while (*src && (src - s) < n)
	{
		*dest = *src;
		dest++;
		src++;
	}

/* append null bytes to end of src copy if src string has less than n bytes */
	while (*dest && (dest - d) < n)
	{
		*dest = '\0';
		dest++;
	}

/* reset pointers for dest and src to their original starting values */
	dest = d;
	src = s;

	return (dest);
}
