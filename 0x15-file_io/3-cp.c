#include "main.h"

/**
 * _buffer - allocates buffer.
 * @file: char
 * Return: char
 */
char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * file_close - closes file.
 * @fd: int.
 */
void file_close(int fd)
{
	int clo = close(fd);

	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: int.
 * @argv: char.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, f_r, f_w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	f_r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || f_r == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		f_w = write(file_to, buffer, f_r);
		if (file_to == -1 || f_w == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		f_r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f_r > 0);

	free(buffer);
	file_close(file_from);
	file_close(file_to);

	return (0);
}
