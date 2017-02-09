#include <stdio.h>
/**
*main - prints base 10 numbers
*Return: 0
*/
int main(void)
{
	int baseten = 0;

	while (baseten < 10)
	{
		printf("%d", baseten);
		baseten++;
	}
	putchar('\n');
	return (0);
}
