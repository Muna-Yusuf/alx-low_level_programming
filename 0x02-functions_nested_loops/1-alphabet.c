#include"main.h"
#include<unistd.h>
/**
 * print_alphabet - function prints alphabet in lowercase and new line
 * Return:0 ( if doen)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return(0);
}
int main(void)
{
    print_alphabet();
    return (0);
}
