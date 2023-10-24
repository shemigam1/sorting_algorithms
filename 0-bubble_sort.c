#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm in c
 * @array: array
 * @size: size
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swapped = 1;

	do {
		swapped = 0;

		for (i = 0; i <= size - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				int temp;

				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
	} while (swapped && size >= 2);
}
