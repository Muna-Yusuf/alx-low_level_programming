#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: int.
 * @max: int.
 * Return: If min > max or malloc fails than (NULL),else the pointer.
 */

int *array_range(int min, int max)
{
	int *x;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc(sizeof(int) * (max - min + 1));
	if (x == 0)
	{
		return (NULL);
	}
	while (min <= max)
	{
		x[i] = min;
		i++;
		min++;
	}
	return (x);
}
