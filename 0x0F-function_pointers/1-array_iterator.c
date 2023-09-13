#include "function_pointers.h"

/**
 * array_iterator - function executes a function given as a parameter on each element of an array.
 * @array: int.
 * @size: array size.
 * @action: function pointer.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
