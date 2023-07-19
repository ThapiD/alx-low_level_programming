#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: number to be checked
 * Return: 1 if n is greater than zero, -1 if n is less than zero
 * and 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar(',');
}
