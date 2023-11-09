#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: struct.
 * @index: int.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpo = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	for (; index != 0; index--)
	{
		if (tmpo == NULL)
		{
			return (-1);
		}
		tmpo = tmpo->next;
	}
	if (tmpo == *head)
	{
		*head = tmpo->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		tmpo->prev->next = tmpo->next;
		if (tmpo->next != NULL)
		{
			tmpo->next->prev = tmpo->prev;
		}
	}
	free(tmpo);
	return (1);
}
