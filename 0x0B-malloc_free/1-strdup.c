#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: if str is null (0),else str.
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *x;

	if (str == 0)
	{
		return (0);
	}
	for (; str[size] != '\0'; size++)
		;
	x = malloc(size * sizeof(*str) + 1);

	if (x == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		x[i] = str[i];
	}
	return (x);
}
