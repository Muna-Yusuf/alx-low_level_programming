#include "lists.h"


/**
 * free_listn_x - frees the linked list.
 * @head: pointr.
 * Return: void.
 */
void free_listn_x(list_t **head)
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
 * free_listint_safe - function that prints a listint_t linked list.
 * @h: pointer to pointer.
 * Return: the number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	list_t *tmp, *tmp1, *node1;
	listint_t *node;
	size_t x = 0;

	tmp = NULL;
	while (*h != NULL)
	{
		tmp1 = malloc(sizeof(list_t));
		if (tmp1 == NULL)
		{
			exit(98);
		}
		tmp1->a = (void *)*h;
		tmp1->next = tmp;
		tmp = tmp1;
		node1 = tmp;
		while (node1->next)
		{
			node1 = node1->next;
			if (*h == node1->a)
			{
				*h = NULL;
				free_listn_x(&tmp);
				return (x);
			}
		}
		node = *h;
		*h = (*h)->next;
		free(node);
		x++;
	}
	*h = NULL;
	free_listn_x(&tmp);
	return (x);
}
