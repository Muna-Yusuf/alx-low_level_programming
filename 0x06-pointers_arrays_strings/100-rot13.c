#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @str: for string
 * Return: str1
 */

char *rot13(char *str)
{
	int i;
	char *str1 = str;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char crot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str)
	{
		for (i = 0; i <= 52 ; i++)
		{
			if (*str == rot13[i])
			{
				*str = crot13[i];
				break;
			}
		}
		str++;
	}
	return (str1);

}
