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

	if (!head)
		return (NULL);
	for (; index != 0 && ptr; index--)
		ptr = ptr->next;
	return (ptr);
}
