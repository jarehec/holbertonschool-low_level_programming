#include "lists.h"
/**
* free_dlistint - Frees a dlistint_t list
* @head: Pointer to start of list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
}
