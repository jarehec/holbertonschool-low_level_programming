#include "lists.h"
#include <stdio.h>
/**
* print_list - prints the elements of a linked list
* @h: linked list
*
* Return: number of elements
*/
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
