#include "main.h"

/**
 * more_numbers - function prints 10 times the numbers f 0 t 14, new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
