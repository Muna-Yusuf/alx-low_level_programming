#include "search_algos.h"

/**
 * jump_search - function Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: vaule or -1 if the vaule not exiex or if the array is null.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, x = 0, start = 0, end = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	do {
		printf("Value checked array[%ld] = [%d]\n", start
				, array[start]);
		if (array[start] == value)
		{
			return (start);
		}
		x++;
		i = start;
		start = x * end;
	} while (start < size && array[start] < value);

	printf("Value found between indexes [%ld] and [%ld]\n", i, start);
	for (; i <= start &&  i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
