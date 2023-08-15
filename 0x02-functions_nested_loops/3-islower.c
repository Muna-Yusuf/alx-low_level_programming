#include<stdio.h>
/**
 * _islower -check for lowercase
 * @c: check if the char is lowercase
 * Return:1 ( zero if doen), otherwais 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
