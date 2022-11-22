#include "lists.h"
/**
 * add_dnodeint - Function that adds a node at the beginning of a list.
 * @head:         Double pointer to linked list.
 * @n:            Constant integer.
 * Return:        Address of new element or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Pointer to a typedef struct */
	dlistint_t *newNode;
	/* Pllocating memory for thsi new pointer to typedef struct */
	newNode = malloc(sizeof(dlistint_t));
	/* Validating the allocation */
	if (newNode == NULL)
		return (NULL);
	/* Storing the received integer constant value in n */
	newNode->n = n;
	/* newNode needs to be at the beginning so its next points to *head */
	newNode->next = *head;
	/* head becomes after newNode so its prev points to newNode */
	if (*head != NULL)
		(*head)->prev = newNode;
	/*
	 * if head doesn't exist the newNode becomes the new head
	 * so its prev points to NULL
	 */
	newNode->prev = NULL;
	/* and head will be equal to newNode */
	*head = newNode;
	return (newNode);
}
