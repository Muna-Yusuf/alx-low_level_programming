#include "main.h"
/**
 * _isalpha -check for lowercase or uppercase
 * @c: check if the char is lowercase or uppercase
 * Return:1 ( zero if doen), otherwais 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
