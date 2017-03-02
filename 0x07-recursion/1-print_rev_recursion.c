#include "holberton.h"
/**
* _print_rev_recursion - recursive rev function
* @s: char input
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
