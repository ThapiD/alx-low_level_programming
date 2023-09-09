#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_and_exit - Function tht prints a error message and exits the program
 * @exits: exit code
 * @format: error text to be printed
 * @k: integer
 * Return: void
 */
void error_and_exit(int exits, const char *format, int k)
{
	dprintf(STDERR_FILENO, format, k);
	exit(exits);
}
/**
 * main - Program that copies the content of one file to the other
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	const char *ff = argv[1];
	const char *ft = argv[2];
	int i, j;
	ssize_t rb, wb;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_and_exit(97, "Usage: %s file_from file_to\n", 0);
	}
	i = open(ff, O_RDONLY);
	if (i == -1)
	{
		error_and_exit(98, "Error: Can't read that file %s\n", i);
	}
	j = open(ft, O_CREAT | O_WRONLY | O_TRUNC, O_APPEND, 0664);
	if (j == -1)
	{
		error_and_exit(99, "Error: Can't write to file %s\n", j);
	}
	while ((rb = read(i, buffer, BUFFER_SIZE)) > 0)
	{
		wb = write(j, buffer, rb);
		if (wb == -1)
		{
			error_and_exit(99, "Error: Can't write to file %s\n", j);
		}
	}
	if (rb == -1)
	{
		error_and_exit(98, "Error: Can't read that file %s\n", i);
	}
	if (close(i) == -1)
	{
		error_and_exit(100, "Error: Can't close this fd %d\n", i);
	}
	if (close(j) == -1)
		error_and_exit(100, "Error: Can't close this fd %d\n", j);
	return (0);
}
