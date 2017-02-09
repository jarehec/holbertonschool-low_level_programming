#include <stdio.h>
#define MAX 25
/**
*main - writes the alphabet followed by a new line
*Return: 0
*/
int main(void)
{
	char loweralphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char upperalphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int counter;

	for (counter = 0; counter <= MAX; counter++)
		putchar(loweralphabet[i]);

	for (counter = 0; counter <= MAX; counter++)
		putchar(upperalphabet[i]);

	putchar('\n');
	return (0);
}
