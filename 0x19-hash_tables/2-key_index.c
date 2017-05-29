#include "hash_tables.h"

/**
 * key_index - gives a key index
 * @key: key
 * @size: size of the key
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
