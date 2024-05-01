#include "sort.h"

/**
 * quick_sort -  sorts integer array in ascending order using the quicksort
 * @array: integer array
 * @size: size of elements
 *
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	quick_sort_recursion(array, size, 0, size - 1);
}

/**
 * quick_sort_recursion - performs quick sort recursively
 * @array: integer array
 * @size: size of elements
 * @low: low bound of array section
 * @high: high bound of array section
 *
 */
void quick_sort_recursion(int *array, size_t size, int low, int high)
{
	int pivot_indx;

	if (low < high)
	{
		pivot_indx = lomuto(array, size, low, high);
		quick_sort_recursion(array, size, low, pivot_indx - 1);
		quick_sort_recursion(array, size, pivot_indx + 1, high);
	}
}

/**
 * lomuto - performs Lumuto partition method on array elements
 * @array: integer array
 * @size: size of elements
 * @low: low bound of array section
 * @high: high bound of array section
 *
 * Return: returns pivot index of array section
 */
int lomuto(int *array, size_t size, int low, int high)
{
	int pivot_elem = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot_elem)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > pivot_elem)
	{
		swap(array, i + 1, high);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - swaps two array elements
 * @array: integer array
 * @i: index for first element
 * @j: index for second element
 *
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
