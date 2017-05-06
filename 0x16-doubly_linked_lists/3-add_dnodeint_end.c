#include "lists.h"
/**
* add_dnodeint_end - Adds a new node to the end of a dnodeint list
* @head: pointer to head node
* @n: data for new node
* Return: Pointer to new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (!head || !new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head)
	{
		while ((*head)->next)
			(*head) = (*head)->next;
		(*head)->next = new;
		new->prev = (*head);
		*head = ptr;
	}
	else
		*head = new;
	return (new);
}
