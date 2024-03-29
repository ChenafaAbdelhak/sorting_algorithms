#include "sort.h"

/**
 * swap - a funtion that swap two value in an array
 * @i: pointer to first value
 * @j: pointer to second value
 */

void swap(int *i, int *j)
{
        int tmp;

        tmp = *i;
        *i = *j;
        *j = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: list of elements to sort.
 * @size: the size of the array to be sorted.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (array == NULL || size < 2)
		return;

	for (i = 0 ; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
