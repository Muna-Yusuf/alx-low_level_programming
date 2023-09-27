#include "lists.h"
#include <stdbool.h>

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
	for (; head && tmp && tmp->next ;)
	{
		head = head->next;
		tmp = tmp->next->next;
		if (head == tmp)
		{
			head = node;
			node = tmp;
			while (true)
			{
				tmp = node;
				for (; tmp->next != head && tmp->next != node ;)
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
	return (NULL);
}
