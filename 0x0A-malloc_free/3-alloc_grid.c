#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2d array of ints
* @width: width of array
* @height: height of array
* Return: pointer to array
*/
int **alloc_grid(int width, int height)
{
	int **ar, i;

	if (width < 0 || height < 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		ar[i] = malloc(width * sizeof(int));

	return (ar);
}
