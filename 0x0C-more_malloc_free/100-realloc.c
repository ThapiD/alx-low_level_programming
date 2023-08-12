#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - Function that reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: the old size of allocated space
 * @new_size: the new size of of new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pp = ptr;
	unsigned int a, k = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		k = old_size;
	for (a = 0; a < k; a++)
		p[a] = pp[a];
	free(ptr);
	return (p);
}
