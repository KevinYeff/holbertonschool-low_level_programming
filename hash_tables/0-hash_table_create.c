#include "hash_tables.h"
/**
 * hash_table_create - Function that allocates a hashtable.
 * @size:              Size of hash table (array).
 * Return:             The hash allocated.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;

	if (size <= 0)
	{
		printf("No size found");
		return (0);
	}

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = calloc(sizeof(hash_node_t *), size);

	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
