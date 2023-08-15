#include<stdio.h>
/**
 * alphabet - print aphabet 10 times
 * Return:0 ( zero if doen)
 */

int alphabet(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			putchar(i);
		}
		putchar('\n');
		j++;
	}
	putchar('\n');
	return (0);
}
