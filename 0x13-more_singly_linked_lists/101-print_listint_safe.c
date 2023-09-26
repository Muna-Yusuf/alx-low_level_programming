#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp, *node, *tmp1, *node1;
	size_t x = 0;

	tmp = NULL;
	while (head)
	{
		tmp1 = malloc(sizeof(listint_t));

		if (tmp1 == NULL)
		{
			exit(98);
		}
		tmp1->p = (*head);
		tmp1->next = tmp;
		node1 = tmp;
		while (node1->next)
		{
			node1 = node1->next;
			if (head == node1->p)
			{
				printf("-> [%p] %d\n",free(head),head->n);
				free(&tmp);
				return (
			}
		}
	}

}
