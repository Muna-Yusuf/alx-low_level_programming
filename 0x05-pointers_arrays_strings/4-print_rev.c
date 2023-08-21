#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * @s: for char
 */
void print_rev(char *s)
{
	int i = 0;
	int p;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (p = i ; p > 0 ; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
