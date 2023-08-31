#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * @n: number
 * @index: index of wanted bit
 * Return: 1 if it worked and -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = ~(1ul << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= k;
	return (1);
}
