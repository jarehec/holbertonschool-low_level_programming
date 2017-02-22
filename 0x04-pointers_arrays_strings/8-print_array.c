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
	
	for (count = 0; count < n; count++)
	{
		if (count + 1 < n)
			printf("%d, ", a[count]);
		if (count + 1 >= n)
			printf("%d\n", a[count]);
	}
}
