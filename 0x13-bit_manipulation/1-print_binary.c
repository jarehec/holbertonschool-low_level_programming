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

	for (counter = 1; counter <= 32 ; counter++)
	{
		if (n & mask)
			set = 1;
		if (set == 1)
			_putchar(n & mask ? '1' : '0');
		if (set == 0 && (counter + 1) > 32)
			_putchar('0');
		n <<= 1;
	}
}
/**
* digit_count - counts the number of chars in a digit
* @n: number to count
*
* Return: character count
*/
unsigned int digit_count(int n)
{
	unsigned int count = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
