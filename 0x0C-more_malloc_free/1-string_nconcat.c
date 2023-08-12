#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Function that concatenates two
 * strings
 * @s1: string to append
 * @s2: stringused to concatenate
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, i = 0, space1 = 0, space2 = 0;

	while (s1 && s1[space1])
		space1++;
	while (s2 && s2[space2])
		space2++;

	if (n < space2)
		p = malloc(sizeof(char) * (space1 + n + 1));
	else
		p = malloc(sizeof(char) * (space1 + space2 + 1));

	if (!p)
		return (NULL);

	while (a < space1)
	{
		p[a] = s1[a];
		a++;
	}
	while (n < space2 && a < (space1 + n))
		p[a++] = s2[i++];

	while (n >= space2 && a < (space1 + space2))
		p[a++] = s2[i++];

	p[a] = '\0';

	return (p);
}
