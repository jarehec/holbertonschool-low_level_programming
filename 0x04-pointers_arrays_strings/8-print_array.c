#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: input array
* @n: number of elements
*/
void print_array(int *a, int n)
{
	char count;

	for (count = 0; count <= n - 1; count++)
	{
		if (count < n - 1)
			printf("%d, ", a[count]);
		if (count == n - 1)
			printf("%d\n", a[count]);
	}
}
