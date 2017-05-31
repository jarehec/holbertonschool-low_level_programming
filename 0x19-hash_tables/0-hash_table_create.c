#include "hash_tables.h"

/**
 * hash_table_create - Creates an empty hash table
 * @size: size of the hash table node
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t *node = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	node = malloc(sizeof(hash_node_t *) * size);
	if (!table || !node)
	{
		if (table)
			free(table);
		if (node)
			free(node);
		return (NULL);
	}
	table->array = &node;
	table->size = size;
	return (table);
}
