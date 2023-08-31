#include "main.h"

/**
 * print_binary - Function that prints binary representation of a number
 * @n: numbers to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{

	unsigned int num = 0;
	int i = 1, left, digit = num % 10;

	if (n == '0')
	{
		putchar('0');
		return;
	}
	while (n != '0')
	{
		left = n % 2;
		n /= 2;
		num += left * i;
		i = i * 10;
	}
	while (num != '0')
	{
		putchar(digit + '0');
		num /= 10;
	}
}
