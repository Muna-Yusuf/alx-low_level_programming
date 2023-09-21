#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	char *s;
	size_t i = 0;
	int j;

	while (h)
	{
		s = h->str;
		j = h->len;
		if (s == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", j, s);
		}
		h = h->next;
		i++;
	}
	return (i);
}
