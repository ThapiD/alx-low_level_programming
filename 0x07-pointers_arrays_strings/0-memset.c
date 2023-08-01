#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - function that fills memory with constant byte
 * @s: for pointer memory address
 * @b: value in memory address
 * @n: checks for bytes in memory address
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	printf("%s", s);
	memset(s, b, n);
	printf("%s", s);
	return (s);
}
