#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @array: array
 * @size: size
 */

void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1];
	int i = 0;
	int j = size - 2;
	int tmp = array[i];

	if (size <= 1)
		return;

	while (i <= j)
	{
		if (array[i] > pivot)
		{
			int tmp = array[i];

			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
			j--;
		}
		else
		{
			i++;
		}
	}

	array[i] = pivot;
	pivot = tmp;
	print_array(array, size);
	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
