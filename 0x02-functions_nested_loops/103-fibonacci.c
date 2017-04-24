#include <stdio.h>
/**
* main - prints sum of even fibo numbs under 4 mil
* Returm: 0
*/
#define MAX 4000000
int main(void)
{
	unsigned long int a = 1, b = 0, c = 0, sum = 0;

	while (c < MAX)
	{
		a += b;
		b = a - b;
		c = a;
		if (c % 2 == 0)
			sum = sum + c;
	}
	printf("%lu\n", sum);
	return (0);
}
