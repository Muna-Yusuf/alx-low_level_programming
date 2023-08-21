#include "main.h"
/**
 * *_strcpy - Write a function that copies the string pointed to by src
 * @dest: to this
 * @src: from this
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
