#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: the number of elements in arrayp
 */
void reverse_array(int *a, int n)
{
	int i, tmp, swp;

	n--;
	for (i = 0; i < n; i++)
	{
		swp = a[i];
		tmp = a[n];
		a[i] = tmp;
		a[n] = swp;
		n--;
	}
}
