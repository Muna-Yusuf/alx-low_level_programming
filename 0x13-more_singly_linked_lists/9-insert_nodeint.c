#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @head: pointer.
 *
 * @n:int(data).
 *
 * @idx: the index of the list where the new
 * node should be added. Index starts at 0
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int x;

	tmp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	for (x = 1; x < idx; x++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
	}
	if (tmp->next != NULL)
	{
		node->next = tmp->next;
		tmp->next = node;
	}
	node->next = NULL;
	tmp->next = node;
	return (node);
}
