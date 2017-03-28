#include "lists.h"
/**
* listint_len - number of elements in a linked listint_t list
* @h: linked list
*
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
