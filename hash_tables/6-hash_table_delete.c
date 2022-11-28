#include "hash_tables.h"
/**
 * freeRecursively - Function that frees nodes of a hash table.
 * @hTableToDelete:  Node of hash table to free recursively.
 * Return:           Void.
 */
void freeRecursively(hash_node_t *hTableToDelete)
{
	if (!hTableToDelete)
		return;
	freeRecursively(hTableToDelete->next);
	free(hTableToDelete->value);
	free(hTableToDelete->key);
	free(hTableToDelete);
}

/**
* hash_table_delete - Function that deletes a hash table.
* @ht:                Hash table to delete.
* Return:             Void.
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *deleteHash = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		for (; index < ht->size; index++)
		{
			deleteHash = ht->array[index];
			if (deleteHash)
				freeRecursively(deleteHash);
		}
		free(ht->array);
		free(ht);
	}
	else
		return;
}
