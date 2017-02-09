#include <stdio.h>
#define MAX 25
/**
*main - writes the alphabet followed by a new line
*Return: 0
*/
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int counter;

	for (counter = 0; counter <= MAX; counter++)
		putchar(lower[counter]);

	for (counter = 0; counter <= MAX; counter++)
		putchar(upper[counter]);

	putchar('\n');
	return (0);
}
