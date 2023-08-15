#include "dog.h"

/**
 * print_dog - Function that prints struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("%s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("Age: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}
		return;
	}
}
