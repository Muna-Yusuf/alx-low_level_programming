#include "main.h"

/**
 * strl - len of string.
 * @s: char
 * Return: int
 */
int strl(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the file.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on failure & filename is NULL return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_open;
	ssize_t output = 0, len = strl(text_content);

	if (!filename)
	{
		return (-1);
	}
	file_open = open(filename, O_WRONLY | O_APPEND);
	if (file_open == -1)
	{
		return (-1);
	}
	if (len)
	{
		output = write(file_open, text_content, len);
	}
	if (output != len)
	{
		close(file_open);
		return (-1);
	}
	close(file_open);
	return (1);
}
