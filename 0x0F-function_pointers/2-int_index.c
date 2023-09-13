#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: int.
 * @size: array size.
 * @cmp:  a pointer to the function.
 *
 * Return:The first element of cmp, if no element matche or size <= 0 ( -1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
		}
	}
	return (-1);
}
