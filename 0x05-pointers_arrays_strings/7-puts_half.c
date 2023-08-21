#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: for char
 */

void puts_half(char *str)
{
	int i, l;
	int c = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		c++;
	}
	l = (c - 1) / 2;
	for (i = l + 1 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
