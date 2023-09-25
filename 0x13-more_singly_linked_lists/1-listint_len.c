#include "lists.h"


/**
 * listint_len - function that returns the number of elements.
 * @h: singly linked list.
 * Return: the number of numbers.
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
