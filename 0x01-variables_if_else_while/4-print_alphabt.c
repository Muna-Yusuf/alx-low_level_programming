#include <stdio.h>
/**
 * main-alphabet in loewrcase and uppercase
 * Return:0(if done)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
