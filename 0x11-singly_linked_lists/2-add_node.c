#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node - adds a node to a linked list
* @head: linked list
* @str: string to place in node
*
* Return: pointer to new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new  = NULL;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(new->str);
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);

	return (new);
}
