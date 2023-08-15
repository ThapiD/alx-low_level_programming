#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: check name of new dog
 * @age: check age of new dog
 * @owner: check owner of new dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name1, owner1, a;
	dog_t *p;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	for (name1 = 0; name[name1]; name1++)
		name1++;

	p->name = malloc(name1 * sizeof(char));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < name1; a++)
		p->name[a] = name[a];

	p->age = age;

	for (owner1 = 0; owner[owner1]; owner++)
		owner++;

	p->owner = malloc(owner1 * sizeof(char));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (a = 0; a < owner1; a++)
		p->owner[a] = owner[a];
	return (p);
}
