#include "main.h"

/**
 * binary_to_uint - Function thata converts a binary number to
 * an unsigned int
 * @b: pointer to string
 * Return: converted number or 0 if theres more chars in string
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '1' || b[i] == '0')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	if (b[i] != '\0')
	{
		return (0);
	}
	return (num);
}
