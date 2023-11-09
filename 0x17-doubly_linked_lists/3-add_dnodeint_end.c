#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end of the list.
 * @head: struct "pointer "
 * @n: int.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_new = malloc(sizeof(dlistint_t));
	dlistint_t *_node;

	if (!head || !_new)
	{
		return (_new ? free(_new), NULL : NULL);
	}
	_new->n = n;
	_new->prev = NULL;
	if (!*head)
	{
		_new->prev = NULL;
		*head = _new;
	}
	else
	{
		_node = *head;
		while (_node->next)
		{
			_node = _node->next;
		}
		_node->next = _new;
		_new->prev = _node;
	}
	return (_new);
}
