#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a list.
 * @head: pointer.
 * @index: the index of the node, starting at 0.
 * Return: that returns the nth node or null if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;
	for (x = 0; x < index; x++)
	{
		if (tmp->next == NULL)
		{
			return (NULL);
		}
		else
			tmp = tmp->next;
	}
	return (tmp);
}
