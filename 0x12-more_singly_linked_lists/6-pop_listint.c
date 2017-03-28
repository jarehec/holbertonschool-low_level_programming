#include "lists.h"
/**
* pop_listint - deletes the head node of a listint list
* @head: linked list
*
* Return: data at head node
*/
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *h = *head;

	if (h != NULL)
	{
		data = h->n;
		*head = h->next;
		free(h);
	}
	return (data);
}
