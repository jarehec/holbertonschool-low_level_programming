#include <stdio.h>
/**
*main - numbers of base 16
*Return: 0
*/
int main(void)
{
	char hexadec[] = "0123456789abcdef";
	int counter = 0;

	while (counter < 16)
	{
		putchar(hexadec[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
	
