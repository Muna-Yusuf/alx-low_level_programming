#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: struct.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *_node;

	while (head)
	{
		_node = head;
		head = head->next;
		free(_node);
	}
}
