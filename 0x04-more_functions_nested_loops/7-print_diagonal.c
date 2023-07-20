#include "main.h"
/**
 * print_diagonal - Print that draws diagnal line in terminal
 * @n: Check for number of times digonal is printed
 * Return: 0 success
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
