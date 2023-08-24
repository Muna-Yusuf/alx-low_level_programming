#include "main.h"

/**
 * *infinite_add - function that adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: the buffer
 * @size_r: the buffer size
 * Return: size
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b = 0, l, k, d = 0;
	int a = 0, f, s;

	while (n1[a] != '\0')
	{
		a++;
	}
	while (n2[b] != '\0')
	{
		b++;
	}
	if (a > b)
	{
		l = a;
	}
	else
	{
		l = b;
	}
	if (l + 1 > size_r)
	{
		return (0);
	}
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		a--;
		b--;
		if (a >= 0)
		{
			f = n1[a] - '0';
		}
		else 
		{
			f = 0;
		}
		if (b >= 0)
		{
			s = n2[b] - '0';
		}
		else
		{
			s = 0;
		}
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
		{
			return (0);
		}
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
		}
	r[0] = d + '0';
	}
	return (r);
}
