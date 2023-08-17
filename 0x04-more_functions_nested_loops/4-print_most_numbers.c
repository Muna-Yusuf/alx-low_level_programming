#include "main.h"

/**
 * print_most_numbers - function prints f 0 t 9 but not print 2 or 4 ,new line
 * Return:void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9' ; i++)
	{
		if (!(i == '2' || i == '4'))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
