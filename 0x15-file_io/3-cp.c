#include "main.h"

char *new_buffer(char *f);
void close_f(int file_descriptor);

/**
* new_buffer - function that creates a new buffer
* @f: file buffer name
* Return: a character
*/
char *new_buffer(char *f)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
exit(99);
}
return (buffer);
}
/**
* close_f - function that closes the file descriptor
* @file_descriptor: checks file_descriptor
* Return: void
*/
void close_f(int file_descriptor)
{
int i;

i = close(file_descriptor);

if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",  file_descriptor);
exit(100);
}
}
/**
* main - funtion that fills in the content of one file to another
* @argv: pointer to array of arguments
* @argc: number of arguments
* Return: 0 always success
*/
int main(int argc, char *argv[])
{
int i, j, t, f;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = new_buffer(argv[2]);
f = open(argv[1], O_RDONLY);

if (f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (t == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

do {
i = read(f, buffer, 1024);

if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

j = write(t, buffer, i);

if (j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

close_f(t);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (i > 0);

free(buffer);
close_f(f);
close_f(t);

return (0);
}
