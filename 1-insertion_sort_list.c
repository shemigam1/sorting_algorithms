#include "sort.h"

/**
 * insertion_sort_list - insertion sort algorithm with DLL
 * @list: DLL
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;
	int swapped = 0;

	if (*list == NULL || (*list)->next == NULL)
		return;
	while (current != NULL)
	{
		listint_t *next = current->next;
		listint_t *temp = sorted;

		if (sorted == NULL || current->n <= sorted->n)
		{
			current->next = sorted;
			current->prev = NULL;
			if (sorted != NULL)
				sorted->prev = current;
			sorted = current;
		}
		else
		{
			while (temp->next != NULL && temp->next->n < current->n)
				temp = temp->next;
			current->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = current;
			temp->next = current;
			current->prev = temp;
			swapped = 1;
		}
		current = next;
		if (swapped)
			print_list(sorted);
	}
	*list = sorted;
}
