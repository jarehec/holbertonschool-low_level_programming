#include "lists.h"
/**
* sum_dlistint - Calculates the sum of all the data in a dlistint_t list
* @head: Pointer to start of list
* Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head)
	{
		for (; ptr; ptr = ptr->next)
			sum = ptr->n + sum;
	}
	return (sum);
}
