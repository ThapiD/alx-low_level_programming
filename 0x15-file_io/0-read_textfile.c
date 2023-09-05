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
	FILE *fp = fopen("filename", "r");
	char *buffer;
	ssize_t readbytes = read(fp, buffer, letters);
	ssize_t writebytes = write(STDOUT_FILENO, buffer, readbytes);

	if (fp == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	if (readbytes <= 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	if (writebytes != readbytes)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	return (readbytes);
}
