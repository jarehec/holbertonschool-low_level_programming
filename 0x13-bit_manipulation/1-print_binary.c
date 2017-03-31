#include "holberton.h"
/**
* print_binary - prints a base10 number in binary
* @n: base10 integer
*/
void print_binary(unsigned long int n)
{
	unsigned int i;
	char set = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		if (n & i)
			set = 1;
		if (set == 1)
			(n & i)? _putchar('1'): _putchar('0');
	}
}
