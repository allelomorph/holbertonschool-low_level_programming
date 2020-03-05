#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: amount of members in the array
 *
 * @size: amount of bytes occupied by each member
 *
 * Return: NULL if either nmemb or size is 0, or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	else
		return (p);
}
