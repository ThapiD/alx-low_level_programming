#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a string
 * @haystack: main string to be scanned
 * @needle: small string to be searched
 * Return: null
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
		for (b = 0; needle[b] != '\0'; b++)
			if (needle[b] == haystack[a])
				return (needle);
	return (NULL);
}
