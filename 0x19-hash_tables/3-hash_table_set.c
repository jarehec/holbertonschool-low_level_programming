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
	hash_node_t *node = NULL, *temp = NULL, *prev = NULL;
	unsigned long int index;

	if (!ht || !key || strlen(key) < 1 || !value)
		return (0);
	index = key_index(((const unsigned char *)key), ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->next = NULL;
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[index])
		ht->array[index] = node;
	else if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				if (!prev)
					prev->next = temp->next;
				free(temp->value);
				free(temp->key);
				free(temp);
				node->next = ht->array[index];
				ht->array[index] = node;
				return (1);
			}
			if (!temp->next)
			{
				temp->next = node;
				return (1);
			}
			prev = temp;
			temp = temp->next;
		}
	}
	return (1);
}
