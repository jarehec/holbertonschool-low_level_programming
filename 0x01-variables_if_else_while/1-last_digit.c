#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints the last digit of a random number
*Return: 0
*/
int main(void)
{
	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	if (lastnum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	if (lastnum !=  0 && lastnum < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	if (lastnum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastnum);

	return (0);
}
