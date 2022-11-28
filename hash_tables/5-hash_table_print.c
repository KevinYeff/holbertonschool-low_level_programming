#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht:               Hash table to print.
 * Return:            void.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *getKeyAndVal = NULL;
	unsigned long int index = 0;
	unsigned char commaTrick = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			getKeyAndVal = ht->array[index];
			for (; getKeyAndVal != NULL; getKeyAndVal =
				     getKeyAndVal->next)
			{
				if (commaTrick == 1)
					printf(", ");
				printf("'%s': '%s'", getKeyAndVal->key,
				       getKeyAndVal->value);
				commaTrick = 1;
			}
		}
		printf("}\n");
	}
	else
		return;
}
