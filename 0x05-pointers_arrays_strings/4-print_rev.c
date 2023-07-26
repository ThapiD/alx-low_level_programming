#include "main.h"

/**
 * print_rev - prints strings in revers
 * @s: for string
 *
 */
void print_rev(char *s)
{
	int i;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		num++;
	}
	for (i = num - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
