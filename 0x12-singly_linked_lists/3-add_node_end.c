#include "lists.h"

/**
 * add_node_end - a function adds a new node at the end of list.
 * @head:singly linked list.
 * @str:char.
 * Return:the address of the new element,or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *h, *tmp;

	while (str[len])
	{
		len++;
	}
	h = malloc(sizeof(list_t));
	if (h == NULL)
	{
		return (0);
	}
	h->str = strdup(str);
	h->len = len;
	h->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = h;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = h;
	}
	return (h);
}
