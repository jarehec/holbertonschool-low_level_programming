#include "hash_tables.h"

/**
 * hash_table_create - Creates an empty hash table
 * @size: size of the hash table node
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t *nodes = NULL;

	table = malloc(sizeof(hash_table_t));
	nodes = malloc(sizeof(hash_node_t *) * size);
	if (!table || !nodes)
	{
		if (table)
			free(table);
		if (nodes)
			free(nodes);
		return (NULL);
	}
	table->array = &nodes;
	table->size = size;
	return (table);
}
