#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht:             Hash table that we want to add or update.
 * @key:            A key, can't be an empty string.
 * @value:          Value.
 * Return:          1 if succeeded otherwise returns 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	unsigned long int index = 0;

	if ((ht == NULL) | (key == NULL) | (value == NULL))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = (char *)strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = (char *)strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return(0);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
