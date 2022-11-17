#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of a
 *                        listint_t linked list.
 * @head:                 Pointer to head of a list.
 * @index:                nth node to return.
 * Return:                nth node or NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
