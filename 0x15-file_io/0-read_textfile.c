#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the POSIZ
 * standard output
 * @filename: name of file
 * @letters: letters to be printed
 * Return: the number of letter to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buffer;
	ssize_t readbytes;
	ssize_t writebytes;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	readbytes =  read(fp, buffer, letters);
	writebytes = write(STDOUT_FILENO, buffer, readbytes);

	if (fp == -1)
	{
		return (0);
	}
	if (readbytes == -1 || writebytes == -1 || writebytes != readbytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fp);
	return (writebytes);
}
