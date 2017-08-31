#include "search_algos.h"
/**
 * binary_search - searches for an element using binary search
 * @array: array to be searched
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: index of element where value is found, -1 on error
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = (size - 1);

	if (array && size > 1)
	{
		while (left != right)
		{
			mid = (left + right) / 2;
			print_array(array, left, right < size - 1 ? right + 1 : right);
			if (array[mid] > value)
				right = mid - 1;
			if (array[mid] < value)
				left = mid + 1;
			if (array[mid] == value)
				return (mid);
		}
			print_array(array, left, right < size - 1 ? right + 1 : right);
	}
	else if (array && size == 1)
		return (array[0] == value ? 0 : -1);
	return (-1);
}
/**
 * print_array - prints an array of integers
 * @array: array of integers
 * @left: lowest value in array
 * @right: highest value in array
 */
void print_array(int *array, size_t left, size_t right)
{
	if (array)
	{
		printf("Searching in array: ");
		for ( ; left <= right; left++)
		{
			printf("%d", array[left]);
			if ((left) != right)
				printf(", ");
		}
		printf("\n");
	}
}
