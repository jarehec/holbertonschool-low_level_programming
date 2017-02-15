#include "holberton.h"
/**
* print_last_digit - prints last digit
* @a: input value
* Return: a
*/
int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
		a = (-a);

	_putchar('0' + a);
	return (a);
}
