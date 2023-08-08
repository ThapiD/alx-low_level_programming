#include "main.h"

/**
 * *str_concat - Concatenates of two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int number1 = 0;
	int number2 = 0;
	char *string;
	int a;
	string = malloc(sizeof(char) * (number1 + number2) +1);
	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		number1++;
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
		number2++;
	}
	if (string == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		string[a] = s1[a];
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
		string[number1 + a] = s2[a];
	}
	return (string);
}