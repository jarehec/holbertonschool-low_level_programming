#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: linked list
* @n: node data
*
* Return: address of new node or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = NULL;
	listint_t *start = *head;

	end = malloc(sizeof(listint_t));
	if (end != NULL)
	{
		end->n = n;
		end->next = NULL;
		if (*head != NULL)
		{
			while (start->next != NULL)
				start = start->next;
			start->next = end;
		}
		else
			*head = end;
	}
	return (end);
}
