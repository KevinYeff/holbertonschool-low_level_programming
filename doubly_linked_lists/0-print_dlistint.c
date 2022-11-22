#include "lists.h"
/**
 * print_dlistint - Prints a doubly linked list.
 * @h:              Head of the list.
 * Return:          Number of items in the linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
