#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function that copies memory address
 * @dest: pointer to destination array
 * @src: pointer to number of bytes
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	printf("%s", dest);
	return (dest);
}
