#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to update
 * @key: key of element
 * @value: value of element
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!ht || !key || !value || strlen(key) < 1)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->next = NULL;
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[index])
		ht->array[index] = node;
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(node->value);
		free(node->key);
		free(node);
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
	}
	else
		ht->array[index]->next = node;
	return (1);
}
