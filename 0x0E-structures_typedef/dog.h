#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Defining new type
 * @name: check dog name
 * @age: check for dog age
 * @owner: check for dogs owner
 * @d: pointer
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} a_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
