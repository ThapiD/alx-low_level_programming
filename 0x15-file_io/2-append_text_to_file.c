#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: name of file
 * @text_content: string to be added at end of file
 * Return: 1 for success amd -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, writebytes, letters = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[letters])
			letters++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	writebytes = write(fp, text_content, letters);

	if (fp == -1)
	{
		return (-1);
	}
	if (writebytes == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
