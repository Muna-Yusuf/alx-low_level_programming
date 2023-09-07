#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb:int.
 * @size:int.
 * Return:If nmemb or size is 0 or malloc fails,then (NULL).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	int y, i = 0;

	if (size == 0 || nmemb == 0)
	{
		return (0);
	}
	y = size * nmemb;
	x = malloc(y);
	if (x == 0)
	{
		return (0);
	}
	while (i < y)
	{
		x[i] = 0;
		i++;
	}
	return (x);
}
