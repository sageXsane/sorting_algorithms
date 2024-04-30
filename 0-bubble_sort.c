#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order using Bubble sort
 * @array: array of integers
 * @size: the size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;

	if size < 2
		return;
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (*(array + b) > *(array + b + 1))
			{
				temp = *(array + b);
				*(array + b) = *(array + b + 1);
				*(array + b + 1) = temp;
				print_array(array, size);
			}
		}
	}
}
