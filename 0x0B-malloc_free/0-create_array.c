#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates array of chars,
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize.
 * Return: the array or null.
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		x[size] = c;
	}
	return (x);
}
