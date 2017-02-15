#include <stdio.h>
/**
* main - prints the sum of multiples of 3 and 5
* Return: 0
*/
int main(void)
{
	int nat, sum;

	for (nat = 1023; nat >= 0; --nat)
	if (nat % 3 == 0 || nat % 5 == 0)
		sum = nat + sum;

	printf("%d\n", sum);
	return (0);
}
