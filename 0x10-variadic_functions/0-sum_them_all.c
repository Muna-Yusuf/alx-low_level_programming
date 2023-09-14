#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: Arguments.
 * @...: int.
 * Return: The sum, if n = 0 than (0).
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	int i = n;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	while (i--)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
