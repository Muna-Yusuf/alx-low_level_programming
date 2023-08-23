#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: string 1
 * @src: string 2
 * @n: n bytes from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i=0;

        for (i = 0 ; src[i] != '\0';i++)
        {
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	if (i > n)
	{
		dest[i] = '\0';
	}
        return (dest);
        
}
