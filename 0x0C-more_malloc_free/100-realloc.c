#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: string.
 * @old_size: int.
 * @new_size: int.
 * Return: If new_size is equal to zero & ptr is not NULL than (NULL).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	x = malloc(new_size);
	if (ptr == NULL)
	{
		if (x == NULL)
		{
			return (NULL);
		}
		return (x);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	if (x == NULL)
	{
		return (0);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		x[i] = ((char *) ptr)[i];
	}
	free(x);
	return (x);

}
