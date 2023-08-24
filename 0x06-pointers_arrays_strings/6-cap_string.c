#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: string
 * Return: str2 capitalizes all words of a string
 */

char *cap_string(char *str)
{
	char *str2 = str;
	int j = 0;

	while (str[j])
	{
		while (!(str[j] >= 'a' && str[j] <= 'z'))
		{
			j++;
		}
		if (str[j - 1] == '\t' ||
		str[j - 1] == '\n' ||
		str[j - 1] == ';' ||
		str[j - 1] == ',' ||
		str[j - 1] == '.' ||
		str[j - 1] == '!' ||
		str[j - 1] == '?' ||
		str[j - 1] == '"' ||
		str[j - 1] == '(' ||
		str[j - 1] == ')' ||
		str[j - 1] == '{' ||
		str[j - 1] == '}' || j == 0)
		str[j] -= 32;
		j++;
	}
	return (str2);
}
