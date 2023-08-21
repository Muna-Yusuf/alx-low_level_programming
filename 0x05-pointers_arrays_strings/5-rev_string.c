#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: char
 */
void rev_string(char *s)
{
	char stri;
	int c = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		c++;
	}
	for (i = 0 ; i < c / 2 ; i++)
	{
		stri = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = stri;

	}
}
