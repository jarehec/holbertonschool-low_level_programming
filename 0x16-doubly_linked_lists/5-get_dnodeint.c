#include "lists.h"
/**
* get_dnodeint_at_index - Returns the node at index
* @head: Pointer to start of linked list
* @index: node index
* Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (i = 0; i < index && ptr; i++)
		ptr = ptr->next;
	return (ptr);
}
