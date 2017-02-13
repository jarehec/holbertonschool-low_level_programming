#include "holberton.h"
/**
* print_last_digit - prints last digit
* @a: input value
* Return: a
*/
int print_last_digit(int a)
{
	if (a < 0)
		a = (a * -1);

	if (a >= 10)
		a = a % 10;

	_putchar('0' + a);
	return (a);
}
