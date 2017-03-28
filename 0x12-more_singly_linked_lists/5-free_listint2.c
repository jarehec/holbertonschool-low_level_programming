#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: linked list
*
*/
void free_listint2(listint_t **head)
{
	listint_t *i = NULL;

	while (*head)
	{
		i = *head;
		*head = i->next;
		free(i);
	}
}
