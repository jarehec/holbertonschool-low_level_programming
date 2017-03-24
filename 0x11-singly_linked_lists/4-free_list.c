#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a list_t list
* @head: linked list
*/
void free_list(list_t *head)
{
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head);
}
