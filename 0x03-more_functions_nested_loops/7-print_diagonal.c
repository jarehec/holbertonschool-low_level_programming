#include "holberton.h"
/**
* print_diagonal - prints a diagonal line n times
* @n: length of line
*/
void print_diagonal(int n)
{
	unsigned char count, lines;

	if (n >= 1)
	{
		for (count = 1; count <= n; count++)
		{
			for (lines = 1; lines < count; lines++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
