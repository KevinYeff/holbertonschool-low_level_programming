#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a linked list.
 * @h:        Pointer to a linked list.
 * Return:    number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t n;

	if (!h)
		return (0);

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
