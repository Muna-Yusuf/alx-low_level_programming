#include <stdio.h>
/**
 * main-alphabet in loewrcase and uppercase in reverse
 * Return:0(if done)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
