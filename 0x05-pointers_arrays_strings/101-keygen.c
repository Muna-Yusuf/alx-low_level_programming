#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * Return:0
 */

int main(void)
{
	int sum;
	char b;

	srand(time(NULL));
	while (sum <= 2645)
	{
		b = rand() % 128;
		sum += b;
		putchar(b);
	}
	putchar(2772 - sum);
	return (0);
}
