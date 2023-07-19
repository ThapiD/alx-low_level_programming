#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 * @i: check for last digit
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int j;
	j = i % 10;

	if (j < 0)
	{
		_putchar(-j + 0);
		return (-j);
	}
	else
	{
		_putchar(j +0);
		return (+i);
	}
}
