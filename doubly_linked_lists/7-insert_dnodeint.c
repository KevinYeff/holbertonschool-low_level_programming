#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h:              Pointer to the first node of the list.
 * @idx:            The position to insert the new node in.
 * @n:              Data to be inserted in the new node.
 * Return:          The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (h == NULL)
		return (NULL);
	temp = *h;
	while ((idx != 0) && (temp->next))
	{
		idx--;
		temp = temp->next;
		if (idx == 0)
		{
			newNode = malloc(sizeof(struct dlistint_s));
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = temp;
			newNode->prev = temp->prev;
			temp->prev->next = newNode;
			temp->prev = newNode;
			return (newNode);
		}
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
