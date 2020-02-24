#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @dest: destination memory addresses
 *
 * @src: source memory addresses
 *
 * @n: amount of bytes to be copied in series
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
