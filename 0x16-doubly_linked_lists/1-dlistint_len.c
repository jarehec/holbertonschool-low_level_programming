#include "lists.h"
/**
* dlistint_len - Counts all elements of a dlistint_t list
* @h: pointer to head of a dlistint_t list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t ele_count = 0;

	if (!h)
		return (ele_count);
	for (; h; h = h->next, ele_count++)
	;
	return (ele_count);
}
