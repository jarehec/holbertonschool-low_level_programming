#include "holberton.h"
/**
* puts_half - prints the second half of a string
* @str: input string
*/
void puts_half(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	;
	if (count % 2 != 0)
		--count;

	count /= 2;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
