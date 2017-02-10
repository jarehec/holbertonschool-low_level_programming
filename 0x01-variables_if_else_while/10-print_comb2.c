#include <stdio.h>
/**
*main - prints 00 to 99
*Return: 0
*/
int main(void)
{
	int counter = 0, tenths = 0;

	while (tenths <= 9)
	{
		putchar('0' + tenths);
		putchar('0' + counter);

		if (tenths == 9 && counter == 9)
			tenths = 9;
		else if (tenths <= 9 && counter < 10)
		{
			putchar(',');
			putchar(' ');
		}
		if (counter == 9)
		{
			tenths++;
			counter = 0;
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
