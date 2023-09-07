#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: int.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	{
		exit(98);
	}
	return (x);
}
