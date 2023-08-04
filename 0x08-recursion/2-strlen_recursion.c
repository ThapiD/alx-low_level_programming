#include "main.h"

/**
 * _strlen_recursion - Function that prints lenght of string
 * @s: for string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (_strlen_recursion(s + 1));
	}
	return (0);
}
