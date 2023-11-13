#include <stdio.h>

/**
 * add - function adds numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: a + b.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function sub numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: a - b.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function mul numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: a * b.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function div numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: a / b.
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Can't div by zero \n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - function mod numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: a + b.
 */

int mod(int a, int b)
{
	return (a % b);
}
