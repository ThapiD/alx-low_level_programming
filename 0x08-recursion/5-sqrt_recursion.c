#include "main.h"

/**
 * _sqrt_recursion - Function that returns square root of
 * given number
 * @n: number used to calculate square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 0));
}
/**
 * _sqrt_recur - Function used to find
 * square root of given number
 * @a: number used to calculate square root
 * @i: iterator
 * Return: square root
 */
int _sqrt_recur(int a, int i)
{
	if (i * i > a)
	{
		return (-1);
	}
	else if (i * i == a)
	{
		return (i);
	}
	return (_sqrt_recur(a, i + 1));
}
