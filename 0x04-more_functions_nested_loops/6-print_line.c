#include "main.h"
/**
 * print_line - draws straight line in terminal
 * @n: check for numbers of times character is printed
 *
 * Return: 0(success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
