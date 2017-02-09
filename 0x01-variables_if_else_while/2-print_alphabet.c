#include <stdio.h>
#define MAX 25
/**
*main - writes the alphabet followed by a new line
*Return: 0
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= MAX)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
