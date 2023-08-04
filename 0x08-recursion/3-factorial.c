#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: for given number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
