#include "lists.h"
/**
* add_dnodeint - Adds a new node at the beginning of a dnodeint list
* @head: pointer to head node
* @n: data for new node
* Return: Pointer to new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!head || !new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
