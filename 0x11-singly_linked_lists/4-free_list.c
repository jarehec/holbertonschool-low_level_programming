#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a list_t list
* @head: linked list
*/
void free_list(list_t *head)
{
	list_t *i = head;
	list_t *next = NULL;

	for (; i != NULL; i = next)
	{
		next = i->next;
		free(i->str);
		free(i);
	}
}
