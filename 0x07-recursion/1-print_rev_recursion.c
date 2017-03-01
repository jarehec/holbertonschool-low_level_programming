#include "holberton.h"
/**
* _print_rev_recursion - recursive rev function
* @s: char input
*/
void _print_rev_recursion(char *s)
{
	int i = sizeof(s);

	i = (i - 1) * 2;

	i--;
	if (i > 0 && *(s + i) != '\n')
	{
		_putchar(*(s + i));
		_print_rev_recursion(s - 1);
	}
	else
	_putchar('\n');
}
