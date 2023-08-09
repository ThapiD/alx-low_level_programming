#include <stdio.h>

/**
 * main - Program that prints number of
 * arguments passed into it
 * @argc: number of command list arguments
 * @argv: array for command lines
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
