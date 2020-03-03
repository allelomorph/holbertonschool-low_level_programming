#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: amount of characters to be held in an array
 *
 * @c: chracter to populate every address in the array
 *
 * Return: pointer to the created array, NULL if size = 0
 * or if the function fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
