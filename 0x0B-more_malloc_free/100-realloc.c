#include <stdlib.h>
#include "holberton.h"
/**
* _realloc - reallocates a memory block
* @ptr: pointer to memory
* @old_size: size in bytes
* @new_size: size in bytes
* Return: pointer to reallocated memory or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size != 0 && ptr != NULL)
		free(ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	new = malloc(new_size + old_size);
	if (new == NULL)
		return (ptr);

	return (new);
}
