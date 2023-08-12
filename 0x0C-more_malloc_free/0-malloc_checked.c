#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - Function that allocates memory
 * @b: number of bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
