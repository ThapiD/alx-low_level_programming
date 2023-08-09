#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: number of command lines
 * @argv: array in command line
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int n, i, addition = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if (!isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[n]);
	}
	printf("%d\n", addition);
	return (0);
}
