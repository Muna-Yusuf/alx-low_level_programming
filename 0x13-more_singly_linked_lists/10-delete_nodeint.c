#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer.
 * @index:the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return:1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node;
	unsigned int x = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if(!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (x == index)
		{
			node->next = tmp->next;
			free(tmp);
			return (1);
		}
		x++;
		node = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
