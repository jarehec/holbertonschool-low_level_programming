#include "holberton.h"
/**
* print_rev - prints a string
* @s: string input
*/
void print_rev(char *s)
{
	int prnt;

	for (prnt = 0; s[prnt] != '\0'; prnt++)
	;

	while (prnt + 1 != 0)
	{
		_putchar(s[prnt]);
		prnt--;
	}

	_putchar('\n');
}
