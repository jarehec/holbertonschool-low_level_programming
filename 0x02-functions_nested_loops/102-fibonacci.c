#include <stdio.h>
/**
* main - prints first 50 fibo nums
* Returm: 0
*/
int main(void)
{
	unsigned long int left = 1, right = 1, count;

	for (count = 1; count <= 50; count++)
	{
		right += left;

		printf("%lu", left);
		if (count <= 49)
		{
			printf(", ");
			printf("%lu, ", right);
		}
		count++;
		left += right;
	}
	putchar('\n');
	return (0);
}
