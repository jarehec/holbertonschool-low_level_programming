#include "holberton.h"
/**
* print_times_table - prints the 9 times table starting with 0
* @a: input
*/
void print_times_table(int a)
{
	int var = 0, num = 0, val;

	if (!(a > 15 || a < 0))
	{
		for (var = 0; var <= a; var++)
		{
			for (num = 0; num <= a; num++)
			{
				val = var * num;

				if (val <= 9)
				{
					if (num != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(val + '0');
				}
				if (val >= 10 && val <= 99)
				{
					_putchar(' ');
					_putchar(val / 10 + '0');
					_putchar(val % 10 + '0');
				}
				if (val >= 100)
				{
					_putchar(val / 100 + '0');
					_putchar(((val / 10) % 10) + '0');
					_putchar(val % 10 + '0');
				}
				if (num < a)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
