#include "main.h"
/**
 * is_prime_number - function that returns integer is a prime number or not
 * @n: number
 * @n1: number
 * Return: 0 if the input integer is a prime number, otherwise return 0
 */

int prime(int n1, int x);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - function that checks if it's a prime number or not
 * @n1: number
 * @x:number
 * Return: int
 */

int prime(int n1, int x)
{
	if (x >= n1 && n1 > 1)
	{
		return (1);
	}
	else if (n1 % x == 0 || n1 <= 1)
	{
		return (0);
	}
	else
		return(prime(n1, x + 1));
}
