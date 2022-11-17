#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node in a linked list
 *                           at a given position.
 * @head:                    Pointer to the first node in the list.
 * @idx:                     Index where the new node is added.
 * @n:                       Data to insert in the new node.
 * Return:                   Pointer to the new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head, *half;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	i = 0;
	while (i + 1 < idx)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}
	half = temp->next;
	temp->next = newNode;
	newNode->next = half;
	return (newNode);
}
