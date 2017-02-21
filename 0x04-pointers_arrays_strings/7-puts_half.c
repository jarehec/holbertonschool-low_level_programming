#include "holberton.h"
/**
* puts_half - prints the second half of a string
* @str: input string
*/
void puts_half(char *str)
{
	int count, hf;

	for (count = 0; str[count] != '\0'; count++)
	;
	if ((count % 2) != 0)
		count -= 1;

	hf = (count /= 2);

	for (count = hf; str[count] != '\0'; count++)
		_putchar(str[count]);

	_putchar('\n');
}
