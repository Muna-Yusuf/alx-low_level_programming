#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: singly linked lists.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;


	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	*head = NULL;
}
