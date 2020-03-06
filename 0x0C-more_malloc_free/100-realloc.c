#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated malloc(old_size)
 *
 * @old_size: preivous size in bytes of memory allocated to ptr
 *
 * @new_size: new size in bytes of memory to be allocated to ptr
 *
 * Return: pointer to the resized area of memory, NULL if either
 * min is greater than max, or if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *src = ptr;
	char *dest;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	dest = malloc(sizeof(char) * new_size);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		dest[i] = src[i];

	free(ptr);
	return ((void *)dest);
}
