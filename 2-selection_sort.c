#include "sort.h"


/**
 * selection_sort - sorts array in ascending order using selction sort method
 * @array: array of integers
 * @size: length of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;
	size_t min_indx;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		min_indx = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min_indx])
				min_indx = b;
		}
		if (min_indx != a)
		{
			temp = array[a];
			array[a] = array[min_indx];
			array[min_indx] = temp;
			print_array(array, size);
		}
	}
}
