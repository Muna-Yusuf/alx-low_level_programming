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
 * create_file - a function that creates a file.
 * @filename: the file.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure or filename is NULL return -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_open;
	ssize_t output = 0, len = strl(text_content);

	if (!filename)
	{
		return (-1);
	}
	file_open = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
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
