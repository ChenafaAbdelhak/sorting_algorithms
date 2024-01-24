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
 * partition - divides an array or a partition into two parts and returns
 *             the pivot index using the Lomuto partition scheme
 * @array: the array to partition
 * @lo: the low index of the array or partition to partition
 * @hi: the high index of the array or partition to partition
 * @size: the size of the array to partition
 *
 * Return: the pivot index
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1, j;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[hi])
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quicksort - sorts an array of integers in ascending order
 *             using the Quick sort algorithm and Lomuto partition scheme
 * @array: the array to be sorted
 * @lo: the low index of the array or partition to sort
 * @hi: the high index of the array or partition to sort
 * @size: the size of the array to be sorted
*/
void quicksort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quicksort(array, lo, p - 1, size);
		quicksort(array, p + 1, hi, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *              using the Quick sort algorithm and Lomuto partition scheme
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
