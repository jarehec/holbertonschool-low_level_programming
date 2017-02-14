#include "holberton.h"
/**
* jack_bauer - prints 24 hr clock
* Return: 0
* 48 is 0 in ascii
*/
void jack_bauer(void)
{
	int hour, min = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		while (min <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');

			_putchar(':');

			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		min = 0;
	}
}
