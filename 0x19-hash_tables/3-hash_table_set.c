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
	hash_node_t *node = NULL, *temp = NULL;
	unsigned long int index;

	if (!ht || !key || strlen(key) < 1 || !value)
		return (0);
	index = key_index(((const unsigned char *)key), ht->size);
	if (!ht->array[index])
	{
		node = create_node(key, value);
		if (!node)
			return (0);
		ht->array[index] = node;
	}
	else if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (temp->value ? 1 : 0);
			}
			if (!temp->next)
			{
				node = create_node(key, value);
				if (!node)
					return (0);
				node->next = ht->array[index];
				ht->array[index] = node;
				return (1);
			}
			temp = temp->next;
		}
	}
	return (1);
}

/**
 * validate_node - checks for memory allocation errors
 * @node: node to check
 * Return: -1 if error, else 0
 */
int validate_node(hash_node_t *node)
{
	if (!(node->key || node->value))
	{
		if (node->key)
			free(node->key);
		if (node->value)
			free(node->value);
		if (node)
			free(node);
		return (-1);
	}
	return (0);
}

/**
 * create_node - creates a node with (k,v) value
 * @key: node key
 * @value: node value
 * Return: pointer to node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->next = NULL;
	node->key = strdup(key);
	node->value = strdup(value);
	if (validate_node(node) == -1)
		return (NULL);
	return (node);
}
