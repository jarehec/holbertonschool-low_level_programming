#include "holberton.h"
/**
* puts_half - prints the second half of a string
* @str: input string
*/
void puts_half(char *str)
{
	int count, loc;

	for (count = 0; str[count] != '\0'; count++)
	;

	for (loc = 0; loc < count; loc++)
	{
		if (loc >= count / 2)
		_putchar(str[loc]);
	}
	_putchar('\n');
}

