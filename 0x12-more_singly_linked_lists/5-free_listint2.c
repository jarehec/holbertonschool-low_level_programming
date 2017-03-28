#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: linked list
*
*/
void free_listint2(listint_t **head)
{
	listint_t *i = *head;
	listint_t *nxt = NULL;

	while (i != NULL)
	{
		nxt = i->next;
		free(i);
		i = nxt;
	}
	free(i);
	*head = NULL;
}
