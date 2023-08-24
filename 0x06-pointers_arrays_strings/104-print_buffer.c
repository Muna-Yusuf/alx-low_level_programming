#include "main.h"

/**
 * print_buffer - a function that prints a buffer.
 * @b: string
 * @size: size
 */
void print_buffer(char *b, int size)
{
	int x = 0, j, i, v;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		j = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + x + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			v = *(b + x + i);

			if (v < 32 || v > 132)
			{
				v = '.';
			}
			printf("%c", v);
		}
		printf("\n");
		x += 10;
	}
}

