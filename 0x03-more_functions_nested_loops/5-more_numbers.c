#include "holberton.h"
/**
* more_numbers - prints 0-14 10 times
*/
void more_numbers(void)
{
	unsigned char num, count;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 9)
				_putchar(num / 10 + '0');
			 _putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
