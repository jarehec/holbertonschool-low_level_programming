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

	if (!ht || !key)
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
	else
	{
		free(node->value);
		free(node->key);
		free(node);
		if (update_key(ht->array[index], key, value) == 0)
			return (1);
		ht->array[index]->next = node;
	}
	return (1);
}

/**
 * update_key - replaces idx->key with str if they match
 * @idx: pointer to a hash node
 * @str: key to compare
 * @val: updated value
 * Return: 0 if key is replaced, else -1
 */
int update_key(hash_node_t *node, const char *str, const char *val)
{
	hash_node_t *temp = node;

	while(temp)
	{
		if (strcmp(temp->key, str) == 0)
		{
			free(temp->value);
			temp->key = strdup(val);
			return (0);
		}
		temp = temp->next;
	}
	return (-1);
}
