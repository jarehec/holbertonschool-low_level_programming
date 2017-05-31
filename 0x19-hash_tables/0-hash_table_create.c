#include "hash_tables.h"

/**
 * hash_table_create - Creates an empty hash table
 * @size: size of the hash table node
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table || !table->array)
	{
		if (table)
			free(table);
		if (table->array)
			free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
