#include "main.h"
#include <stdlib.h>
/**
 * _strstr -  a function that locates a substring.
 * @haystack: string
 * @needle: will compare it with s to find matches
 * Return:the matched characters or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i] != '\0')
	{
		i++;
	}
	while (*haystack != '\0')
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] != needle[i])
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
