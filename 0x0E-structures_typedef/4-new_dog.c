#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dog_t - creates a new struct of type dog
 *
 * @name: string for dog name passed to new struct
 *
 * @age: float for dog age passed to new struct
 *
 * @owner: string for owner passed to new struct
 *
 * return: pointer to new dog struct, or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *nd;

/*	printf("%lu\n", sizeof(struct dog)); */
	nd = malloc(sizeof(struct dog));

	if (nd == NULL)
		return (NULL);

	nd->name = name;
	nd->age = age;
	nd->owner = owner;

	return (nd);
}
