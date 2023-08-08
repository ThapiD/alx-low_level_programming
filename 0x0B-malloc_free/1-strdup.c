#include "main.h"

/**
 * *_strdup - Function that returns a pointer to a newly
 * allocated space in memory
 * @str: pointer to string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str1;
	int number = 0;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		number++;
	}
	str1 = malloc(sizeof(char) * number + 1);
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		str1[a] = str[a];
	}
	return (str1);
}
