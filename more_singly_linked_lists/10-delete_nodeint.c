#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at
 *                           index of a listint_t linked list.
 * @head:                    Pointer to Pointed to head of a list.
 * @index:                   Index of the node to delete.
 * Return:                   1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t n = 0;
	listint_t *temp, *nextNode;

	if (!head || !(*head))
		return (-1);


	if (index == 0)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (n == index - 1)
		{
			nextNode = temp->next;
			temp->next = nextNode->next;
			free(nextNode);
			return (1);
		}
		temp = temp->next;
		n++;
	}
	return (-1);
}
