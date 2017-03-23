#include "lists.h"
/**
* list_len - counts the elements in a linked list
* @h: linked list
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
