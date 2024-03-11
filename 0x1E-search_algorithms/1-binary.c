#include "search_algos.h"

/**
 * binary_search - function "Binary search algorithm".
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: value or -1 if the value not found or if the array null.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t h = size - 1, l = 0;
	size_t i, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= h)
	{
		mid = l + (h - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i < h)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return (-1);
}
