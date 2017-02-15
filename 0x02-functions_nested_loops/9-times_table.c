#include "holberton.h"
/**
*
*
*
*/
void times_table(void)
{
	int var = 0, num = 0, val;

	for (var = 0; var <= 9; var++)
	{
		for (num = 0; num <= 9; num++)
		{
			val = var * num;

			if (val <= 9)
			{	
				if (num != 0)
					_putchar(' ');
				_putchar(val + '0');
			}
			if (val >= 10)
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			if (num < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		
	}
}


		/**	if (nums <= 9)
		*		_putchar(nums + '0');
		*	if (nums >= 10)
		*	{
		*		_putchar(nums / 10 + '0');
		*		_putchar(nums % 10 + '0');
		*
		*	_putchar('\n');
		*	nums ++;
		*/
