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
	char *str;
	int a = 0, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	str = malloc(i);

	if (str == NULL)
		return (NULL);

	if (a < i)
	{
		str[a] = 0;
		a++;
	}
	return (str);
}
