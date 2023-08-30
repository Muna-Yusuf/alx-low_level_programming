#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: string
 * Return: l (length)
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (l);
	}
	else
	{
		l += _strlen_recursion(s + 1) + 1;
	}
	return (l);
}
