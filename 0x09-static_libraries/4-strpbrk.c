#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Fucntion that searches string for any sets of bytes
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: a pointer s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				return (s + a);
	return (NULL);
}
