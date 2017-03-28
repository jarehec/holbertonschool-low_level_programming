#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: linked list
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
