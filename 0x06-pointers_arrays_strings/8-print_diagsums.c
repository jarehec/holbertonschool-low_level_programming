#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: square matrix
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + *(a + (i * size) + i);
		sum2 = sum2 + *(a + (size - 1) - i + (size * i));
	}

	printf("%d, %d\n", sum, sum2);
}
