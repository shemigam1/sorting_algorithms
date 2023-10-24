#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: array
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			size_t min = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
				{
					min = j;
				}
			}
			if (min != i)
			{
				int temp = array[i];

				array[i] = array[min];
				array[min] = temp;
				print_array(array, size);
			}
		}
	}
}
