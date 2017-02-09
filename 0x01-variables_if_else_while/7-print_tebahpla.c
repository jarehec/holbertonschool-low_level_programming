#include <stdio.h>
#define MAX 25
/**
*main - reverses the alphabet
*Return: 0
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = MAX; counter >= 0; counter--)
		putchar(alphabet[counter]);
	putchar('\n');
	return (0);
}
