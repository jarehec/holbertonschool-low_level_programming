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
	list_t *start = *head;
	list_t *end  = NULL;

	end = malloc(sizeof(list_t));
	if (end != NULL)
	{
		end->str = strdup(str);
		end->len = _strlen(end->str);
		end->next = NULL;
		if (*head == NULL)
		{
			*head = end;
			return (end);
		}
		else
		{
			while (start->next != NULL)
				start = start->next;
			start->next = end;
		}
	}
	else
		return (NULL);

	return (end);
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
