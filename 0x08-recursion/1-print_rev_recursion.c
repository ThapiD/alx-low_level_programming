#include "main.h"

/**
 * _print_rev_recursion - Function that prints string in reverse
 * @s: check for string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
