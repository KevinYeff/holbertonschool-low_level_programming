#include "lists.h"

/**
 * _strLengthPlus - Function that returns the length of a string.
 * @s:              Pointer to a string.
 * Return:          A variable that contains the length of the string.
 */
int _strLengthPlus(const char *s)
{
	int b = 0;

	do {
		b++;
	} while (*s++);

	return (b);
}

/**
 * *_strcpyPlus - Function that copies a string included the null bite
 *                to a buffer.
 * @dest:         Pointer to a buffer.
 * @src:          Pointer to string.
 * Return:        Pointer to dest.
 */
char *_strcpyPlus(char *dest, const char *src)
{
	int b = 0, len;

	len = _strLengthPlus(src);
	while (b < len)
	{
		*dest++ = *src++;
		b++;
	}
	return (dest - b);
}
/**
 * *_strdup - Function returns a pointer to a new string which is
 *            a duplicate of the string s.
 * @s:        Pointer to a string.
 * Return:    A pointer to a new duplicated string.
 */

char *_strdup(const char *s)
{
	char *p;
	int len;

	if (!s)
		return (NULL);

	len = _strLengthPlus(s);

	p = malloc(sizeof(char) * len);

	if (!p)
		return (NULL);

	_strcpyPlus(p, s);

	return (p);
}

/**
 * add_node_end - Function that adds a node at the end of the list.
 * @head:         Double pointer to linked list.
 * @str:          Pointer to string.
 * Return:        Address of new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *newNode, *temp;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = _strdup(str);
	length = _strLengthPlus(str);
	newNode->len = length - 1;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
