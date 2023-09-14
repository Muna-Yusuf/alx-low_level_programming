#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @n: Arguments.
 * @...: int.
 * @separator: the string to be printed between numbers.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *x;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, char*);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
