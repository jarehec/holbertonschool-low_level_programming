#include "holberton.h"
/**
* print_sign - prints the sign of a number
* @n: input value
* Return: 1 if > 0, -1 if < 0, 0 if 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n == 0)
	{
		_putchar('-');
		return (1);
	}
	return (n);
}
