#include "main.h"

/**
 * _strlen_recursion - Function that prints lenght of string
 * @s: for string
 * @n: for length of string
 * Return: n
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == 0)
	{
		return (n += _strlen_recursion(s + 1));
	}
	return (n);
}
