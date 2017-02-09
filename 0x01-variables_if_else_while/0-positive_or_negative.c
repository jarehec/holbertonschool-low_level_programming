#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		puts("is positive");
	if (n < 0)
		puts("is negative");
	if (n == 0)
		puts("is zero");
	return (0);
}
