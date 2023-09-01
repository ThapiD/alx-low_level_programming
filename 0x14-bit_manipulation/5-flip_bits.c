#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to the next
 * @n:number
 * @m:number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m;
	unsigned int i = 0;

	while (k > 0)
	{
		i += k & 1;
		k >>= 1;
	}
	return (i);
}
