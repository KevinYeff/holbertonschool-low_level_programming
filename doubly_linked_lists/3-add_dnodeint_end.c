#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a node at the end of the list.
 * @head:             Double pointer to a doubly linked list.
 * @n:                Constant integer.
 * Return:            Address of new element or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	if (head == NULL)
		return (NULL);
	/* Allocating the newNode */
	newNode = malloc(sizeof(dlistint_t));
	/* validating malloc */
	if (newNode == NULL)
		return (NULL);
	/* assigning values */
	newNode->n = n;
	newNode->next = NULL;
	/* if pointer head is equal to NULL (first instance) */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	/* after creating the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
