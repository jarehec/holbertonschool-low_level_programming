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
	if (s[i] !=  s[0] && *(s + i) > 31)
	{
		_putchar(*(s + i));
		_print_rev_recursion(s - 1);
	}
	_putchar('\n');
}
