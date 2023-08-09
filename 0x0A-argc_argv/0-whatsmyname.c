#include <stdio.h>

/**
 * main - Program that prints its name
 * @argv: array with command lines
 * @argc: number of command line arguments
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
