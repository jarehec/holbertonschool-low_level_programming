#include "sort.h"

/**
 * insertion_sort_list - sorts a list in ascending order using insertion sort
 * @list: list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *ptr = NULL;

	if (!(list || head))
		return;
	for (head = *list; head; head = head->next)
	{
		for (ptr = head->prev; ptr; ptr = ptr->prev)
		{
			if (head->n < ptr->n)
			{
				head->prev->next = head->next;
				if (head->next)
					head->next->prev = head->prev;
				head->next = ptr;
				if (ptr->prev)
				{
					head->prev = ptr->prev;
					ptr->prev->next = head;
					ptr->prev = head;
				}
				else
				{
					head->prev = NULL;
					head->next = *list;
					(*list)->prev = head;
					*list = head;
				}
				print_list(*list);
			}
		}
	}
}
