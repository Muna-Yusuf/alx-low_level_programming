#include "main.h"

/**
 * f_error - function checks if the file is opened and handle errors.
 * @file_from: file to copy to check.
 * @file_to: file to copy.
 * @argv: char.
 * Return: void.
 */

void f_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc:int.
 * @argv:char.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, file_error;
	ssize_t x, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	f_error(file_from, file_to, argv);

	x = 1024;
	while(x == 1024)
	{
		x = read(file_from, buffer, 1024);
		if (x == -1)
			f_error(-1, 0, argv);
		y = write(file_to, buffer, x);
		if (y == -1)
			f_error(0, -1, argv);
	}
	file_error = close(file_from);
	if (file_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
		exit(100);
	}
	file_error = close(file_to);
	if (file_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_to);
		exit(100);
	}
	return (0);
}
