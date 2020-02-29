#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte; fills
 * the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: string pointer to denote section of memory
 *
 * @b: constant byte to fill memory addresses
 *
 * @n: amount of bytes to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

/*
 * wanted to build test for n being greater than the length
 * of s, but since the main fills it with null bytes, we can't
 * do the standard check for the end of a string...
 */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
