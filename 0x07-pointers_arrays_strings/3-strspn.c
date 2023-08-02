#include "main.h"

/**
 * _strspn: Function that gets lenght of a prefix substring
 * @s: string to check from
 * @accepts: string to be checked
 * Return: charcters checked
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; a[s] != 0; a++)
		for (b = 0; b[s] != accept(b); b++)
			if (accept(b) == '\0')
	return (0);
}
