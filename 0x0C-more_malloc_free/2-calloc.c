#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * initializes all bytes to 0.
 *
 * @nmemb: amount of members in the array
 *
 * @size: amount of bytes occupied by each member
 *
 * Return: NULL if either nmemb or size is 0, or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	c = (char *)p;
	for (i = 0; i < size; i++)
		c[i] = 0;

	return (p);
}
