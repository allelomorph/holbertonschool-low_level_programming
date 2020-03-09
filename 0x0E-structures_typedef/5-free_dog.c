#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to a struct type dog
 *
 * @d: pointer to struct type dog
 *
 * return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
