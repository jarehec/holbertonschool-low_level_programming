#include "lists.h"
/**
* sum_listint - gets the sum of the data of a listint_t list
* @head: linked list
*
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
