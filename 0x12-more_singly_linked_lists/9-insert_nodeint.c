#include "lists.h"
/**
* insert_nodeint_at_index - adds a new node at a given position
* @head: linked list
* @idx: index where new node will be added
* @n: new node data
*
* Return: address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new != NULL)
		{
			new->n = n;
			new->next = NULL;

			if (idx == 0)
			{
				*head = new;
				new->next = temp;
				return (new);
			}
			for (i = 0; i < idx - 1 && temp != NULL; i++)
				temp = temp->next;

			if (temp != NULL)
			{
				new->next = temp->next;
				temp->next = new;
			}
			else
			{
				free(new);
				return (NULL);
			}
		}
	}
	return (new);
}
