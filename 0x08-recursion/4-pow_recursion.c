#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: the base
 * @y: power
 * Return: if y =  0 (-1),else x
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
return (-1);
}
