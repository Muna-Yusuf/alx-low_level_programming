#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the number of letters, if filename is NULL or
 * can not be opened or read 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_open, file_read, output;

	if (!filename || !letters)
	{
		return (0);
	}
	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	file_read = read(file_open, buffer, letters);
	output = write(STDOUT_FILENO, buffer, file_read);
	if (output == -1)
	{
		free(buffer);
		close(file_open);
		close(file_read);
		return (0);
	}
	close(file_open);
	close(file_read);
	return (output);
}
