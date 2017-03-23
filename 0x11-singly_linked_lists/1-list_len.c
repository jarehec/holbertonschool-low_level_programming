#include "lists.h"
#include <stdlib.h>
/**
* list_len - counts the elements in a linked list
* @h: linked list
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (NULL);
	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
