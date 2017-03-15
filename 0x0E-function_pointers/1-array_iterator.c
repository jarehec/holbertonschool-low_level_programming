#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function given as a parameter
* @array: using this array
* @size: sizeof array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
