#include "lists.h"
/**
 * sum_listint - Return sum of all data in linked list
 * @head:        Pointer to head pointer of linked list
 * Return:       Sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum = sum + head->n;
		return (sum + sum_listint(head->next));
	}
	else
		return (0);
}
