#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strdup(char *str);

/**
 * new_dog - creates a new struct of type dog
 *
 * @name: string for dog name passed to new struct
 *
 * @age: float for dog age passed to new struct
 *
 * @owner: string for owner passed to new struct
 *
 * Return: pointer to new dog struct, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nd_name;
	char *nd_owner;
	struct dog *nd;

	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
		return (NULL);

	nd_name = _strdup(name);
	if (nd_name == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd_owner = _strdup(owner);
	if (nd_owner == NULL)
	{
		free(nd_name);
		free(nd);
		return (NULL);
	}

	nd->name = nd_name;
	nd->age = age;
	nd->owner = nd_owner;

	return (nd);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be measured
 *
 * Return: amount of chars in string
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s; s++)
	{
		length++;
	}
	return (length);
}

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: string to be copied and used to determine size of
 * memory allocation
 *
 * Return: pointer to first address in the space created
 * in memory
 */

char *_strdup(char *str)
{
	int size;
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	size = (_strlen(str) + 1);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
