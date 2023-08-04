#include "main.h"

/**
 * _pow_recursion - Function that returns x to the power y
 * @x: number raised
 * @y: exponential
 * Return: the exponential
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 )
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
