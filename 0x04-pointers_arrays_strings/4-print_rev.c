#include "holberton.h"
/**
* print_rev - prints a string
* @s: string input
*/
void print_rev(char *s)
{
	unsigned int prnt;

	for (prnt = 0; s[prnt] != '\0'; prnt++)
	;

	for ( ; prnt + 1 != '\0'; prnt--)
	{
		_putchar(s[prnt]);
	}

	_putchar('\n');
}
