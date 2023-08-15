#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initializes a variable
 * @d: pointer
 * @name: pointer to be initialize
 * @age: age to be initialized
 * @owner: pointer to be initialized
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	a_dog = {d, name, age, owner};
}
