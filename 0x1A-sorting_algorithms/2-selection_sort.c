#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: array to sort
 * @size: number of elements in array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, temp;
	int low;

	if (array && size > 1)
	{
		for (i = 0; i < (size - 1); i++)
		{
			low = array[i];
			for (j = i + 1; j < (size); j++)
			{
				if (low > array[j])
				{
					low = array[j];
					temp = j;
				}
			}
			array[temp] = array[i];
			array[i] = low;
			print_array(array, size);
		}
	}
}
