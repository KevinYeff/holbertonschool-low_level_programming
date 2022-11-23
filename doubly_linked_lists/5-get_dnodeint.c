#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of a
 *                         dlistint_t linked list.
 * @head:                  Pointer to head of a list.
 * @index:                 nth node to return.
 * Return:                 nth node or NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
