#include "holberton.h"
/**
* print_binary - prints a base10 number in binary
* @n: base10 integer
*/
void print_binary(unsigned long int n)
{
	unsigned long int c;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	char set = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (c = 0; c <= (sizeof(n) * 8 - 1); c++)
	{
		if (n & mask)
			set = 1;
		if (set == 1)
			_putchar(n & mask ? '1' : '0');
		n <<= 1;
	}
}
