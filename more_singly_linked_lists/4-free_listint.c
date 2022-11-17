#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list.
 * @head:         Head of the list.
 * Return:        Void.
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
