#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory
* @b: bytes
* Return: pointer to memory or NULL
*/
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(sizeof *mem * b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
