#include "lists.h"
/**
 * free_listint2 - A function that free a listint_t list.
 * @head:          A pointer to a pointer to struct of lintint_t.
 * Return:         Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
