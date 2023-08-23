#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0' ; i++)
	{
		j++;
	}
	for (j = 0; src[j] != '\0' ; j++)
	{
		src[i] = dest[i + j];
	}

	return (dest);
}
