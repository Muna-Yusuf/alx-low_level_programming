#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list.
 * @head: singly linked list.
 * @n: int.
 * Return: the address of the new element,or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (0);
	}
	h->n = n;
	h->next = *head;
	*head = h;
	return (*head);
}
