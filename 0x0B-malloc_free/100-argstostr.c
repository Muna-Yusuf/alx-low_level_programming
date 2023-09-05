#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function concatenates all arguments of your program.
 * @ac: int
 * @av: list
 * Return: z array
 */

char *argstostr(int ac, char **av)
{
	int i, j, x = 0, c = 0;
	char *z;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			x++;
	}
	x += ac;
	z = malloc(sizeof(char) * x + 1);
	if (z == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			z[c] = av[i][j];
		}
		z[c] = '\n';
		c++;
	}
	return (z);
}
