#include "main.h"
#include<stdio.h>
/**
 * print_sign - prints the sign of member n
 * @n: check if it is + or - or 0
 * Return:1 if n is greater than zero, return:0 if n is zero
 * Returns:-1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
