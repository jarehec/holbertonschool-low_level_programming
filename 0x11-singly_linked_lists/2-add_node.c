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
	char *cp_str = strdup(str);
	unsigned int len = strlen(cp_str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = cp_str;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
