#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - a
* @nmemb: num of elements
* @size: sizeof type
* Return: pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ar, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * sizeof(size));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
