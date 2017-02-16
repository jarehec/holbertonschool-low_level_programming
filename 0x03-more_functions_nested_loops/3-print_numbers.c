#include "holberton.h"
/**
* print_numbers - prints 0-9
*/
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
