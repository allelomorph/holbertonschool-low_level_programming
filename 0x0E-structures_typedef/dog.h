#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: dog name
 * @age: age in years
 * @owner: name of guardian
 *
 * Description: example dog-themed struct for C project 0x0E.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
