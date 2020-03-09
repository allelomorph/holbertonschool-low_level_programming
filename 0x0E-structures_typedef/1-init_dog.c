#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  initializes a variable of type struct dog
 *
 * @d: pointer to a struct type dog
 * @name: string to set to dog.name
 * @age: float to set to dog.age
 * @owner: string to set to dog.owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
