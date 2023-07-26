#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char j;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num++;
	for (i = 0; i < num / 2; i++)
	{
		j = s[i];
		s[i] = s[num - 1 - i];
		s[num - 1 - i] = j;
	}
}
