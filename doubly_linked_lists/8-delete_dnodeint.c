#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index
 *                            of a dlistint_t linked list.
 * @head:                     Pointer to the first node.
 * @index:                    The index of the node that should
 *                            be deleted. Index starts at 0.
 * Return:                    1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = index;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index)
	{
		while ((index > 0) && temp)
		{
			temp = temp->next;
			index--;
		}
		if (temp == NULL)
			return (-1);
		if (temp->next)
		{
			(temp->next)->prev = temp->prev;
			(temp->prev)->next = temp->next;
			index = counter;
		}
		else
			(temp->prev)->next = NULL;
	}
	if (index == 0)
	{
		if (temp->next)
			(temp->next)->prev = NULL;
		*head = temp->next;
	}
	free(temp);
	return (1);
}
