#include <stdio.h>
/**
*main - prints base 10 numbers
*Return: 0
*/
int main(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		putchar('0' + counter);
		counter++;
	}
	putchar('\n');
	return (0);
}
