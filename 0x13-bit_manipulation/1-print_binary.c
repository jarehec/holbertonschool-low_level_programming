#include "holberton.h"
/**
* print_binary - prints a base10 number in binary
* @n: base10 integer
*/
void print_binary(unsigned long int n)
{
	unsigned int counter;
	unsigned int mask = 1 << 31;
	char set = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (counter = 1; counter <= 32 ; counter++)
	{
		if (n & mask)
			set = 1;
		if (set == 1)
			_putchar(n & mask ? '1' : '0');
		n <<= 1;
	}
}
