#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: int 1
 * @n: int 2
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
