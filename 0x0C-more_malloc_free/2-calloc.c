#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Function that allocates
 * memory for an array
 * @nmemb: checks number of elements
 * @size: checks size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
