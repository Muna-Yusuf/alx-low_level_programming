#include <stdio.h>
/**
 * main-print numbers with
 * Return:0(if done)
 */
int main(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (x = j + 1 ; x <= 9 ; x++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');
				if (i < 7 || j < 8 || x < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
