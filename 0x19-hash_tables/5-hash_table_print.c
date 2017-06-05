#include "hash_tables.h"

/**
 * hash_table_print - prints the data in a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int idx = 0, ht_len;

	if (ht->array)
	{
		for (idx = 0, ht_len = 0; idx < ht->size; idx++)
			if (ht->array[idx])
				ht_len = idx;
		printf("%u\n", ht_len);
		putchar('{');
		for (idx = 0; idx < ht->size; idx++)
		{
			temp = ht->array[idx];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next || idx < ht_len)
					printf(", ");
				temp = temp->next;
			}
		}
		putchar('}');
		putchar('\n');
	}
}
