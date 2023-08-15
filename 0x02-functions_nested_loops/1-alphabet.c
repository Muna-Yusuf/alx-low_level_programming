#include"main.h"
#include<unistd.h>
/**
 * alphabet - function prints alphabet in lowercase and new line
 * Return:0 ( if doen)
 */
int alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
