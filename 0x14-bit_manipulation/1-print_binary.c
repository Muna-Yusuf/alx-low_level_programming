#include "main.h"

/**
 * print_binary - function prints the binary representation of a number.
 * @n:long int.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		for (i = 13; i >= 0; i--)
		{
			c = n >> i;
			if (c & 1)
			{
				_putchar('1');
				c++;
			}
			else if (c)
				_putchar('0');
		}
	}
}
