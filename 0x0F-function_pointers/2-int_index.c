#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: string to be checked
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: 0 always success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	for (j = 0; j <= size; j++)
		if ((*cmp)(array[j]))
			return (j);
	return (-1);
}
