#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: input array
* @n: number of elements
*/
void print_array(int *a, int n)
{
	int count;

	n--;
	for (count = 0; count <= n; count++)
	{
		if (count < n)
			printf("%d, ", a[count]);
		if (count == n)
			printf("%d\n", a[count]);
	}
}
