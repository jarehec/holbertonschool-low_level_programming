#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int idx;

	if (ht && ht->array)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			while (ht->array[idx])
			{
				temp = ht->array[idx]->next;
				free(ht->array[idx]->key);
				free(ht->array[idx]->value);
				free(ht->array[idx]);
				ht->array[idx] = temp;
			}
		}
		free(ht->array);
	}
	if (ht)
		free(ht);
}
