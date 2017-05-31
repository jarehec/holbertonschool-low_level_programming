#include "hash_tables.h"

/**
 * hash_table_create - Creates an empty hash table
 * @size: size of the hash table node
 * Return: pointer to hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
/*		free(table);*/
		return (NULL);
	}
	table->size = size;
	return (table);
}
