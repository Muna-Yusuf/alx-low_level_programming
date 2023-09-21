#include "lists.h"

/**
 * add_node - functionadds a new node at the beginning.
 * @str: char.
 * @head:singly linked list.
 * Return: the address of the new element,or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *h;

	while (str[len])
	{
		len++;
	}
	h = malloc(sizeof(list_t));
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		h->str = strdup(str);
		h->len = len;
		h->next = *head;
		*head = h;
	}
	return (*head);
}
