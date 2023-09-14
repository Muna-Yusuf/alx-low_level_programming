#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;
	char *se = ", ", *c;

	va_start(list, format);

	while ((format != NULL) && *(format + i) != '\0')
	{
		switch (*(format + i))
		{
			case 's':
				c = va_arg(list, char *);
				c = (c != NULL) ? c : "(nil)";
				printf("%s", c);
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			default:
				i++;
				continue;
		}
		if (*(format + i + 1) != 0)
		{
			printf("%s", se);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
