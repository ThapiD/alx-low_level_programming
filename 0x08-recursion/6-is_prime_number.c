#include "main.h"

/**
 * is_prime_number - Prints if whether of not int is
 * a prime number
 * @n: input
 * Return: 1 if prime number or 0 if otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - Calculates whether or not its a prime
 * number
 * @a: input
 * @i: iterator
 * Return: 0 always(success)
 */
int is_prime(int a, int i)
{
	if (a <= 1 || (a != i && a % i == 0))
	{
		return (0);
	}
	else if (a == i)
	{
		return (1);
	}
	return (is_prime(a, i + 1));
}
