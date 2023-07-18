#include "main.h"
/**
 * main - Program that prints alphabets in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 27; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
