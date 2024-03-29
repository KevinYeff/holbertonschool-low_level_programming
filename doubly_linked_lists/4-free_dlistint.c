#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head:          Head of the list.
 * Return:         void.
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
}
