#include <stdio.h>
#define MAX 25
/**
*main - writes the alphabet one letter per line
*Return: 0
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= MAX)
	{
		putchar(alphabet[i]);
		putchar('\n');
		i++;
	}
	return (0);
}
