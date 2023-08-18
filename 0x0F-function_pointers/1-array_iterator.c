#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 * @array: string
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	(*action)(array[j]);
}
