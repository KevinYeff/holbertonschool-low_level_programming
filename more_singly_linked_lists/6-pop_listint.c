#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head:        A pointer to the address of the head of the listint_t list.
 * Return:       0 If the linked list is empty.
 *               Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rtn;

	if (!*head)
		return (0);

	temp = *head;
	rtn = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (rtn);
}
