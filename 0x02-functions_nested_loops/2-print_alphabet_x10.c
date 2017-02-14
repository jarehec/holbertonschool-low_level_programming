#include "holberton.h"
/**
* print_alphabet_x10 - prints alphabet 10 times with new line*
*
*/
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int print = 0, counter;

	while (print <= 9)
	{
		for (counter = 0; counter <= 25; counter++)
		{
			_putchar(alpha[counter]);
		}
		_putchar('\n');
		print++;
	}
}
