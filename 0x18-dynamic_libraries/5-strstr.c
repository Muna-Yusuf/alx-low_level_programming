#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack:string
 * @needle:will compare it with s to find matches
 * Return: the matched characters or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (needle[i] != '\0')
	{
		i++;
	}
	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
			{
				break;
			}
		}
		if (j != i)
		{
			haystack++;
		}
		else
			return (haystack);
	}
	return (NULL);
}
