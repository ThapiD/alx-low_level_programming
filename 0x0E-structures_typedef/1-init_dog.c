#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initializes a variable
 * @d: pointer
 * @name: pointer to be initialize
 * @age: age to be initialized
 * @owner: pointer to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
