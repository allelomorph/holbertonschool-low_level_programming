#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to have content added from str
 *
 * @src: string to be read
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
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
 * tracer
 *	printf("*dest=%c, dest=%p\n", *dest, dest);
 */
/* increment through src addresses, assigning content to end of dest */
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
/*
 * tracers
 *		printf("*src=%c, src=%p", *src, src);
 *		printf("*dest=%c dest=%p\n", *dest, dest);
 */
	}

/* append null byte to concatenated string manually */
	dest++;
	*dest = '\0';

/* reset pointers for dest and src to their original starting values */
	dest = d;
	src = s;

	return (dest);
}
