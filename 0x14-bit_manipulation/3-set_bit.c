#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index.
 * @n: number.
 * index:the index, starting from 0 of the bit you want to set.
 *
 * Return:1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb_bin = (sizeof(n) * 8), i;

	if (index > numb_bin)
	{
		return (-1);
	}
	for (i = 1; index > 0; index--)
	{
		i *= 2;
	}
	*n += i;
	return (1);
}
