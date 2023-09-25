#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end.
 * @head: ingly linked list.
 * @n: int.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *tmp;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (0);
	}
	h->n = n;
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
