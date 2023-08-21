#include<stdio.h>
/**
 * swap_int -  function that swaps the values of two integers
 * @a: for the first num
 * @b: for the num
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
