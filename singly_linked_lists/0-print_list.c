#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_l list.
 * @h:          Pointer to a Linked list.
 * Return:      Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n;

	if (!h)
		return (0);
	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
