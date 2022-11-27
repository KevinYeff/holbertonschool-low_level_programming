#include "hash_tables.h"
/**
 * key_index - Function that gives the index of a key.
 * @key:       Key as key.
 * @size:      Size of the array of the hash table.
 * Return:     Index that stores the key in the array of the hash table.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
