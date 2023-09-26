#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 *  the data (n) of a listint_t linked list.
 *  @head: pointer.
 *  Return:if the list is empty, return 0 or the sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
