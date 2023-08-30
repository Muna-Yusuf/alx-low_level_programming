#include "main.h"

/**
 * _sqrt_recursion - function  returns the natural square root of a number.
 * @n: number
 * Return: if n = 0 than -1
 */

int _sqrt_recursion(int n)
{
return (sq(n, 1));
}

int sq(int n, int x);

/**
 * sq - function to calculate (square).
 * @x:square root.
 * @n: to find square.
 * Return: square root
 */
int sq(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (sq(n, x + 1));
	}
	else
		return (-1);
}
