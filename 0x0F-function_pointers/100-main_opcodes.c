#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: argument 1
 * @argc: argumnet 2
 * Return: 0 always success
 */
void print_opcodes(unsigned char *p, int bytes);

int main(int argc, char *argv[])
{
	int bytes;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (unsigned char *)main;
	print_opcodes(p, bytes);
	return (0);

}
/**
 * print_opcodes - Prints opcodes
 * @p: pointer
 * @bytes: number of bytes
 * Return: void
 */
void print_opcodes(unsigned char *p, int bytes)
{
	int j;

	for (j = 0; j < bytes; j++)
	{
		if (j < bytes - 1)
			printf(" ");
		printf("%02hhx", (unsigned char)p[j]);;
	}
	printf("\n");
}
