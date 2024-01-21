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
 * bubble_sort - sort an array using bubble algorithm
 * @array: the array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i,j;

	if (size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		for  (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}	
		}
	}
}
