#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_l list.
 * @h:          Pointer to a Linked list.
 * Return:      Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	if (!h)
		return (0);
	n = 0;
	while(h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
