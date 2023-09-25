#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: singly linked lists.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
