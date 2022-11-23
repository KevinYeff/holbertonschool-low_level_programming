#include "lists.h"
/**
 * sum_dlistint - Return sum of all data in the doubly linked list.
 * @head:         Double pointer to head of the doubly linked list.
 * Return:        Sum, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum += head->n;
		return (sum + sum_dlistint(head->next));
	}
	else
		return (0);
}
