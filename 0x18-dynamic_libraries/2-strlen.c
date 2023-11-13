#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: char for length
 * Return:c if doen
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
