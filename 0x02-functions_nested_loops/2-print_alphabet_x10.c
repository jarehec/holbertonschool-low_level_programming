#include "holberton.h"
/**
* print_alphabet - prints alphabet 10 times with new line*
*
*/
void print_alphabet_x10(void)
{
	char a = 'a';
	int print;

	while (print <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		print++;
	}
}
