#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;
	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		if (node == NULL)
		{
			return (*head);
		}
		*head = node;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (0);
}
