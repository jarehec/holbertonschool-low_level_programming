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
		new->len = _strlen(new->str);
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);

	return (new);
}
/**
* _strlen - returns the length of a string
* @s: string input
* Return: length of s
*/
unsigned int _strlen(char *s)
{
	unsigned int lngth = 0;

	if (s != NULL)
		for (lngth = 0; s[lngth] != '\0'; lngth++)
		;

	return (lngth);
}
