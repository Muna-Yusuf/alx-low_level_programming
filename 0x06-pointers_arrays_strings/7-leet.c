#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: string
 * Return: str2 which is encoded
 */

char *leet(char *s)
{
	unsigned int i;
	char *str2 = s;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};

	while(*s)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
		{
			if (*s == letters[i] || *s == letters[i] + 32)
			{
				*s = 48 + num[i];
			}
		}
		s++;
	}
	return (str2);
}
