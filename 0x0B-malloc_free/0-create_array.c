#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - Fucntion that cerates an array of characters 
 * and initializes it with a speific character
 * @size: for size of character
 * @c: array of character
 * Return: Null if size is 0 and pointer if otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
