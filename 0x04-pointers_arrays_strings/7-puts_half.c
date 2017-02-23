#include "holberton.h"
/**
* puts_half - prints the second half of a string
* @str: input string
*/
void puts_half(char *str)
{
	unsigned int count, loc;

	for (count = 0; str[count] != '\0'; count++)
	;
	if (count % 2 != 0)
		--count;

	loc = count / 2;

	while (loc < count)
	{
		_putchar(str[loc]);
		loc++;
	}
	_putchar('\n');
}

