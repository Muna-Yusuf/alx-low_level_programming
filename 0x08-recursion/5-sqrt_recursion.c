#include "main.h"

/**
 * _sqrt_recursion - function  returns the natural square root of a number
 * @n: number
 * Return: if n = 0 than 
 */

int sq(int num, int x);
int _sqrt_recursion(int n)
{
return (sq(n, 1));
}

/**
 * sq - function to calculate (square)
 * @num: for findig square
 * @x: square root
 * Return: number
 */

int sq(int num, int x)
{
	if (x * x == num)
	{
		return (x);
	}
	else if (x * x < num)
	{
		return (sq(num, x + 1));
	}
	else 
		return (-1);
}
