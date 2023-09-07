#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: int
 * Return: If the function fails(NULL), else The returned pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		l1++;
	}
	for (l2 = 0; s1[l2] != '\0'; l2++)
	{
		l2++;
	}
	x = malloc(l1 + n + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		x[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		x[i] = s2[j];
		i++;
	}
	return (x);
}
