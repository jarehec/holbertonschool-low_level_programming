#include "holberton.h"
/**
* print_alphabet - prints alphabet 10 times with new line*
*
*/
void print_alphabet_x10(void)
{
	char a;
	int print;

	while (print <= 9)
	{	
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		print++;
	}
}
