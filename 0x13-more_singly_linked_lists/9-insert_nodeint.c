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
	unsigned int x = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp)
	{
		if (x == idx - 1)
		{
			node->next = tmp->next;
			tmp->next =  node;
			return (node);
		}
		x++;
		tmp = tmp->next;
	}
	free(node);
	return (NULL);
}
