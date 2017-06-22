#include "sort.h"

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to sort
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - recursive function to sort an array
 * @arr: array to sort
 * @left: values smaller than the pivot
 * @right: values larger than the pivot
 * @size: number of elements in array
 */
void _qsort(int *arr, int left, int right, size_t size)
{
	int i;

	if (left < right)
	{
		i = lomuto(arr, left, right, size);
		_qsort(arr, left, i - 1, size);
		_qsort(arr, i + 1, right, size);
	}
}

/**
 * lomuto - partitions an array using Lomuto's partition scheme
 * @arr: array to partition
 * @left: values smaller than the pivot
 * @right: values larger than the pivot
 * @size: number of elements in array
 * Return: next index
 */
int lomuto(int *arr, int left, int right, size_t size)
{
	int i = left - 1, j, temp;
	int pi = arr[right];

	for (j = left; j < right; j++)
	{
		if (arr[j] <= pi)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			if (arr[j] != arr[i])
				print_array(arr, size);
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[right];
	arr[right] = temp;
	if (arr[right] != arr[i + 1])
		print_array(arr, size);
	return (i + 1);
}
