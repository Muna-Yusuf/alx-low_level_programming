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
	int x, y;
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
	z = malloc((x + y) * sizeof(char) + 1);
	if (z == 0)
	{
		return (0);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		z[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		z[x] = s2[y];
		x++, y++;
	}
	z[x] = '\0';
	return (z);
}
