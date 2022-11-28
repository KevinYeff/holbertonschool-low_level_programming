#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht:             Hash table.
 * @key:            Key to search for inside the hash table.
 * Return:          Value associated with a key, otherwise returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *rtnValue = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		rtnValue = ht->array[index];
		for (; rtnValue != NULL; rtnValue = rtnValue->next)
		{
			if (strcmp(rtnValue->key, (char *)key) == 0)
				return (rtnValue->value);
		}
	}
	return (NULL);
}
