#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *node;

	tmp = head;
	node = head;
	while (head)
	{
		if (tmp && tmp->next)
		{
			head = head->next;
			tmp = tmp->next->next;
			if (head == tmp)
			{
				head = node;
				node = tmp;
				while (1)
				{
					tmp = node;
					while (tmp->next != head && tmp->next != node)
					{
						tmp = tmp->next;
					}
					if (tmp->next == head)
					{
						break;
					}
					head = head->next;
				}
				return (tmp->next);
			}
		}
	}
	return (0);
}
