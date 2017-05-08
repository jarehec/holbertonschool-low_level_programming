#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a node at idx index
* @h: Pointer to linked list
* @idx: index to insert node
* @n: data for new node
* Return: Address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr = *h;

	new = malloc(sizeof(dlistint_t));
	if (!h || !new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = (*h);
	if (idx > 0)
	{
		for (; idx > 1 && (*h); idx--)
			(*h) = (*h)->next;
		if (*h && idx == 1)
		{
			new->prev = (*h);
			new->next = (*h)->next;
			if ((*h)->next)
				new->next->prev = new;
			(*h)->next = new;
			(*h) = ptr;
			return (new);
		}
	}
	if (idx == 0)
	{
		(*h)->prev = new;
		(*h) = new;
		return (new);
	}
	free(new);
	return (NULL);
}
