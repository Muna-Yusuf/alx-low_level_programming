#include "main.h"

/**
 * palindrom - function returns 1 if a string is a palindrome and 0 if not
 * @x: string
 * Return: 0 or 1
 */
int palindrom(char *x)
{
	int l, z, i;

	for (i = 0; x[i] != '\0'; i++)
		i++;

	for (z = i + 1; x[z] != '\0'; z--)
	{
		for (l = 0; x[l] != '\0'; l++)
		{
			if (x[z] == x[l])
			{
				return (0);
			}
		}
	}
	return (1);
}

/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 * @s:string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (palindrom(s));
}
