#include "lists.h"

/**
 * pop_listint - a function deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: singly linked list.
 * Return: the head node’s data (n) or if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *h;
	size_t n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	h = tmp->next;
	n = tmp->n;
	free(*head);
	*head = h;
	return (n);
}
