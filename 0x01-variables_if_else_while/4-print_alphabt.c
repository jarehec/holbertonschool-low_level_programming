#include <stdio.h>
#define MAX 25
/**
*main - writes the alphabet followed by a new line. doesn't print q or e
*Return: 0
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= MAX)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
