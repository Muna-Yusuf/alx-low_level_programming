#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the file.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure or filename is NULL return -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_open;
	ssize_t output = 0, len = 0;

	if (!filename)
	{
		return (-1);
	}
	file_open = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (file_open == -1)
	{
		return (-1);
	}
	while (*text_content++)
	{
		len++;
	}
	if (len)
	{
		output = write(file_open, text_content, len);
	}
	if (output == -1)
	{
		close(file_open);
		return (-1);
	}
	close(file_open);
	return (1);

}
