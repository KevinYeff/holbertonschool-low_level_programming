#include "lists.h"
/**
 * dlistint_len - Function that returns the length of a linked list.
 * @h:            Pointer to a linked list.
 * Return:        Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
