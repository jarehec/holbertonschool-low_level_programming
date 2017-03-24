#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - adds a node to the end of a linked list
* @head: linked list
* @str: string to place in node
*
* Return: pointer to new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start = NULL;
	list_t *end  = *head;

	start = malloc(sizeof(list_t));
	if (start)
	{
		start->str = strdup(str);
		start->len = _strlen(start->str);
		if (*head == NULL)
		{
			start->next = NULL;
			*head = start;
			return (start);
		}
		else
		{
			while (end->next != NULL)
				end = end->next;
			end->next = start;
		}
	}
	return (start);
}
/**
* _strlen - returns the length of a string
* @s: string input
* Return: length of s
*/
int _strlen(char *s)
{
	unsigned int lngth = 0;

	if (s != NULL)
		for (lngth = 0; s[lngth] != '\0'; lngth++)
		;

	return (lngth);
}
