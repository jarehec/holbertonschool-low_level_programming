#include <stdio.h>
/**
*main - prints 00 to 99
*Return: 0
*/
int main(void)
{
	int counter = 0, tens = 0;

	while (tens <= 9)
	{
		while (counter <= 9)
		{
			putchar('0' + tens);
			putchar('0' + counter);
			if (tens == 9 && counter == 9)
			{
				counter = tens = 10;
				continue;
			}
			putchar(',');
			putchar(' ');
			++counter;
			if (counter > 9)
				tens++;
		}
		counter = 0;
	}
	putchar('\n');
	return (0);
}
