#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of commandline
 * @argv: pointer to argc
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	printf("%d\n", argc - 1);
	(void)argc;
	return (0);
}
