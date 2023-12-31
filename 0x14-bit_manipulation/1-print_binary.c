#include "main.h"

/**
 * print_binary - function prints the binary representation of a number.
 * @n:long int.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned long int c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		c = n >> i;
		if (c & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
