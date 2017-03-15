#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - searches for an integer
* @array: array to search
* @size: size of array
* @cmp: function pointer
* Return: inxed of first int or -1 if failed
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == 0 || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
