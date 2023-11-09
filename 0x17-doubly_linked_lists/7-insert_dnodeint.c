#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: strcut "pointer to head"
 * @idx: int.
 * @n: int.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmpo = *h;
	dlistint_t *_new;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		tmpo = tmpo->next;
		if (tmpo == NULL)
		{
			return (NULL);
		}
	}
	if (tmpo->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	_new = malloc(sizeof(dlistint_t));
	if (_new == NULL)
	{
		return (NULL);
	}
	_new->n = n;
	_new->prev = tmpo;
	_new->next = tmpo->next;
	tmpo->next->prev = _new;
	tmpo->next = _new;
	return (_new);
}
