#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Function that creates an array of integers
 * @min: min range of stored values
 * @max: max range of stored values and number of elements
 * Return: pointer
 */
int *array_range(int min, int max)
{

	int *p;
	int size, a;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		p[a] = min++;
	return (p);
}
