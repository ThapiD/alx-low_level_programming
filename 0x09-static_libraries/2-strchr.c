#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - Function that locates a character in string
 * @s: string to be scanned
 * @c: character to be searched
 * Return: s
 */
char *_strchr(char *s, char c)
{
	c = 'l';
	s = _strchr(s, c);

	if (s != NULL)
	{
	printf("%s", s);
	}
	s++;
	return (s);
}
