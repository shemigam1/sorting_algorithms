#include "sort.h"

/**
 * insertion_sort_list - insertion sort algorithm with DLL
 * @list: DLL
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list;

    while (current != NULL)
    {
        listint_t *next = current->next;

        while (current->prev != NULL && current->prev->n > current->n)
        {
		listint_t *tmp = current->prev;

		current->prev = tmp->prev;
		if (tmp->prev != NULL)
		{
                	tmp->prev->next = current;
		}
		tmp->next = current->next;
		current->next = tmp;
		tmp->prev = current;

		print_list(*list);
        }

        current = next;
    }
}
