#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at index
* @head: linked list
* @index: node to delete
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (*head != NULL)
	{
		for (i = 0; i < index && node != NULL; i++)
		{
			temp = node;
			node = node->next;
		}
		if (node)
		{
			if (index == 0)
				*head = node->next;
			else
				temp->next = node->next;
			free(node);
			return (1);
		}
	}
	return (-1);
}
