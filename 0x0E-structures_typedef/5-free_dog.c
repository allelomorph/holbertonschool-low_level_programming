#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees memory allocated to a struct type dog
 *
 * @d: pointer to struct type dog
 *
 * return: void
 */

void free_dog(dog_t *d)
{
        free(d);
}
