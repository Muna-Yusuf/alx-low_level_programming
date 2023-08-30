#include "main.h"
/**
 * is_prime_number - function that returns integer is a prime number or not
 * @n: number
 * @x: number
 * Return: 0 if the input integer is a prime number, otherwise return 0
 */

int prime(int n, int x);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - function that checks if it's a prime number or not
 * @n: number
 * @x:number
 * Return: int
 * @n: number
 */
int prime(int n, int x);
int prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime(n, x + 1));
}
