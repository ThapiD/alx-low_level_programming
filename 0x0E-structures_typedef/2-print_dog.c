#include "dog.h"

/**
 * print_dog - Function that prints struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
			else
			{
				printf("%s", d->name);
			}
			if (d->age == 0)
			{
				printf("Age: (nil)");
			}
				else
				{
					printf("%f", d->age);
				}

				if (d->owner == NULL)
				{
					printf("Owner: (nil)");
				}
					else
					{
						printf("%s", d->owner);
					}
	}
}
