#include "main.h"

/**
 * _strspn: Function that gets lenght of a prefix substring
 * @s: string to check from
 * @accept: string to be checked
 * Return: number charcters checked
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != 0; a++)
		for (b = 0; s[b] != accept(b); b++)
			if (accept(b) == '\0')
				return (a);
	return (0);
}
