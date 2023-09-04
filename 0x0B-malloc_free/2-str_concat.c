#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: null.
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, i;
	char *z;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	for (x = 0; s1[x] != '\0'; x++)
	{
		x++;
	}
	for (y = 0; s1[y] != '\0'; y++)
	{
		y++;
	}
	z = malloc((x + y + 1) * sizeof(char));
	if (z == 0)
	{
		return (0);
	}
	for (i = 0; i <= x + y; i++)
	{
		if (i < x)
			z[i] = s1[i];
		else
			z[i] = s2[i - x];
	}
	z[i] = '\0';
	return (z);
}
