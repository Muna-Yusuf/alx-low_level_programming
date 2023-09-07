#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1:string.
 * @s2:string.
 * @n:int.
 * Return:If the function fails(NULL), else (pointer).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, L1, L2;
	char *x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (L1 = 0; s1[L1] != '\0'; L1++)
	{
		;
	}
	for (L2 = 0; s2[L2] != '\0'; L2++)
	{
		;
	}
	x = malloc(L1 + n + 1);

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
