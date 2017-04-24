#include <stdio.h>
/**
* main - prints first 50 fibo nums
* Returm: 0
*/
#define MAX 49
int main(void)
{
	unsigned long int a = 1, b = 0, c = 0, count;

	for (count = 0; count < MAX; count++)
	{
		a += b;
		b = a - b;
		c = a;
		printf("%lu", c);
		if (count + 1 != MAX)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
