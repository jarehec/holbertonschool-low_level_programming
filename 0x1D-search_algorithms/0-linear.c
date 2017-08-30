#include "search_algos.h"
/**
 * linear_search - searches for an element using linear search
 * @array: array to be searched
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: index of the element, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
