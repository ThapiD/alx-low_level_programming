#include "main.h"

/**
 * _strlen - length of a string
 * @s: string to be counted
 * Return: void
 */
int _strlen(char *s)
{
	int i;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num++;
	return (num);
}
