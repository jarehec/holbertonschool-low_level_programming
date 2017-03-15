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

	for (i = 0; i < size; i++)
		action(array[i]);
}
