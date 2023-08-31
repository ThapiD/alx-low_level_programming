#include "main.h"

/**
 * set_bit - Function that sets the value of a bit
 * @n: number
 * @index: index of bit wanted
 * Return: 1 if it worked and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= k;
	return (1);
}
