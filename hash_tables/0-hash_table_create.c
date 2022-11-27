#include "hash_tables.h"
/**
 * hash_table_create - Function that allocates a hashtable.
 * @size:              Size of hash table (array).
 * Return:             The hash allocated.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size == '\0')
		return (NULL);
	hash = malloc(sizeof(hash_table_t) * size);

	if (hash == NULL)
		return (NULL);
	return (hash);
}
