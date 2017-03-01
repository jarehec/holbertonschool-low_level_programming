#include "holberton.h"
/**
* _puts_recursion - recursive puts function
* @s: char input
*/
void _puts_recursion(char *s)
{
	if (*(s + 0) != '\0')
	{
		_putchar(*(s + 0));
		_puts_recursion(s + 1);
	}
	else if (*(s + 0) == '\0')
	_putchar('\n');
}
