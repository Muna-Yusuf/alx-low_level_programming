#include "lists.h"


/**
 * print_listint - a function prints all the elements of a listint_t list.
 * @h: singly linked list.
 * Return: the number of numbers.
 */

size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
