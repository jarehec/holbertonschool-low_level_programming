#include "holberton.h"
/**
*print_alphabet - prints alphabet with new line
*
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
