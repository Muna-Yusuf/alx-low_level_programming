#include "function_pointers.h"

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: int.
 * @argv: string.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int x;
	char *y = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (x--)
	{
		printf("%02hhx%s", *y++, x ? " " : "\n");
	}
	return (0);
}
