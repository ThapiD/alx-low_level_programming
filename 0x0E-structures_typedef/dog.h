#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defining new type
 * @name: check dog name
 * @age: check for dog age
 * @owner: check for dogs owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} a_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
