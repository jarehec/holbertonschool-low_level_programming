#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: linked list
* @n: node data
*
* Return: address of new node or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add = NULL;

	add = malloc(sizeof(listint_t));
	if (add != NULL)
	{
		add->n = n;
		add->next = *head;
		*head = add;
	}
	return (add);
}


