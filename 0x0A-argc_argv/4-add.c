#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
		{
			if (*x < '0' || *x > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
