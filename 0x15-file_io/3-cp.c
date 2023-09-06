#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_and_exit - Function tht prints a error message and exits the program
 * @exits: exit code
 * @text: error text to be printed
 * Return: void
 */
void error_and_exit(int exits, const char *text)
{
        dprintf(STDERR_FILENO, "%s\n", text);
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
	const char *ff = argv[1], *ft = argv[2];
	int i, j;
	ssize_t rb, wb;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_and_exit(97, "Usage: cp file_from file_to");

	i = open(ff, O_RDONLY);
	if (i == -1)
	{
		error_and_exit(98, "Error: Can't read that file");
	}
	j = open(ft, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (j == -1)
	{
		close(i);
		error_and_exit(99, "Error: Can't write to file");
	}
	while ((rb = read(i, buffer, BUFFER_SIZE)) > 0)
	{
		wb = write(j, buffer, rb);
		if (wb == -1)
		{
			close(i);
			close(j);
			error_and_exit(99, "Error: Can't write to file");
		}
	}
	if (rb == -1)
	{
		close(i);
		close(j);
		error_and_exit(98, "Error: Can't read that file");
	}
	if (close(i) == -1 || close(j) == -1)
		error_and_exit(100, "Error: Can't close this description");
	return (0);
}
