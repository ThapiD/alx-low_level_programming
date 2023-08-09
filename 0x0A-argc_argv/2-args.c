#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: number of command lines
 * @argv: arrays in command lines
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
