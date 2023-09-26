#include "lists.h"

/**
 * free_list_x - frees the linked list.
 * @head: pointr.
 * Return: void.
 */
void free_list_x(list_t **head)
{
	list_t *tmp, *node;

	if (head != NULL)
	{
		node = *head;
		while ((tmp = node) != NULL)
		{
			node = node->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	list_t *tmp, *tmp1, *node1;
	size_t x = 0;

	tmp = NULL;
	while (head != NULL)
	{
		tmp1 = malloc(sizeof(list_t));

		if (tmp1 == NULL)
		{
			exit(98);
		}
		tmp1->a = (void *)head;
		tmp1->next = tmp;
		tmp = tmp1;
		node1 = tmp;
		while (node1->next)
		{
			node1 = node1->next;
			if (head == node1->a)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list_x(&tmp);
				return (x);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		x++;
	}
	free_list_x(&tmp);
	return (x);
}
