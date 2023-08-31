#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * @n: numbers
 * @index: index if bit you want
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 1ul << index;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (n & k)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
