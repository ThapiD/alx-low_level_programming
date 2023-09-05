#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: name of file to create
 * @text_content: string
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	int letters = 0;
	int writebytes = write(fp, text_content, letters);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (writebytes == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
