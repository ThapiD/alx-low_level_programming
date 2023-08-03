#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: check for string
 * Return: 0 always success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		return;
	_puts_recursion(s + 1);
	_putchar(*s);
	}
	else
		_putchar('\n');
}
