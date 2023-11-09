#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning of the list.
 * @head: struct "pointer to current head"
 * @n: int.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *_new = malloc(sizeof(dlistint_t));

	if (!head || !_new)
	{
		return (_new ? free(_new), NULL : NULL);
	}
	_new->n = n;
	_new->prev = NULL;
	if (!*head)
	{
		*head = _new;
		_new->next = NULL;
	}
	else
	{
		_new->next = *head;
		(*head)->prev = _new;
		*head = _new;
	}
	return (_new);
}
